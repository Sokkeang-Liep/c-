    //Do by myself
#include<iostream>
#include"service/product_service.hpp"
using namespace std;


int main() {
  system("cls");
    Product p1(1, "Coke", 1.25, 10);
    Product p2(2, "Pepsi", 1.15, 20);
    Product p3(3, "Sprite", 1.05, 15);

    // Add products to the repository
    addProduct(p1);
    addProduct(p2);
    addProduct(p3);

    // Display all products
    cout << "All Products after adding:" << endl;
    for (const auto& product : getAllProducts()) {
        cout << "ID: " << product.id << ", Name: " << product.name 
             << ", Price: $" << product.price << ", Quantity: " << product.quantity << endl;
        cout<<"-------------------------------------------------------"<<endl;
    }

    // Get a product by ID
     cout << "[+] Insert Product ID to search: ";
     int id; cin >> id;
    Product productRepository = getProductById(id);
    productRepository.getUserInfo();
    cout<<"------------------------------------------------------------"<<endl;

    // Delete a product by ID
    cout << "[+] Insert Product ID to delete: ";
    cin >> id;
    deleteProductById(id);
    cout<<"[+]Deleted successfully.."<<endl;
    cout<<"---------------------------------------------------------"<<endl;

    // Display all products after deletion
    cout << "\nAll Products after deletion:" << endl;
    for (const auto& product : getAllProducts()) {
        cout << "ID: " << product.id << ", Name: " << product.name 
             << ", Price: $" << product.price << ", Quantity: " << product.quantity << endl;
    }
  

  return 0;
}