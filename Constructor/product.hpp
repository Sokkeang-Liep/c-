#include<iostream>
using namespace std;
   class Product{
     private:
       int id;
       string pName;
       double pPrice;
    public:
    //contructor with no parameter
 Product(){}
 
    //contructor with  parameter
 Product(int id,string pName,double pPrice){
    this->id=id;
    this->pName=pName;
    this->pPrice=pPrice;
  }
  void getProductInfo(){
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<pName<<endl;
    cout<<"Price: "<<pPrice<<endl;
    cout<<"========================"<<endl;
  }


};
