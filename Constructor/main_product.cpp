#include<iostream>
#include "product.hpp"
#include<vector>
using namespace std;
int main(){
    system("cls");
    
   Product product1(1,"Vital",0.5);
   Product product2(2,"Sting",0.75);
   product1.getProductInfo();
   product2.getProductInfo();
    return 0;
}