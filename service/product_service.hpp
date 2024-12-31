    //Do by myself
#include "../repository/product_repo.hpp"


vector<Product> getAllProducts(){
    return productRepository;    // Returns all products from the repository
}

Product addProduct(Product p){
    productRepository.push_back(p);  // Add the product to the repository
    return p;   // Return the added product
}

Product getProductById(int id){
    for( auto&product : productRepository){
        if(product.id==id){
            return product;
        }
    }
    return{};
}

bool deleteProductById(int id) {
    for (int i = 0; i < productRepository.size(); ++i) {
        if (productRepository[i].id == id) {
            productRepository.erase(productRepository.begin() + i);
            return true;  // Product successfully deleted
        }
    }
    return false;  // Product not found for deletion
}

