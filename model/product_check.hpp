     //by teacher correcte
#include<iostream>
using namespace std;
struct Product{
    int id;
    string pName;
    double price;
    void getProductInfo(){
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << pName << endl;
        cout << "Product Price: $" << price << endl;
    }
};


