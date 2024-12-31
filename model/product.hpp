  //Do by myself
#include<iostream>
using namespace std;

struct Product{
    int id;
    string name;
    double price;
    int quantity;
    // Constructor
    Product(int id, string name, double price, int quantity)
        : id(id), name(name), price(price), quantity(quantity) {}

    // Default constructor (optional)
    Product() : id(0), name(""), price(0.0), quantity(0) {}
    //
    void setId(int id){
        this->id=id;
    }
    int getId(){
        return this->id;
    }
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return this->name;
    }
    void setPrice(){
        this->price=price;
    }
    double getPrice(){
        return this->price;
    }
    void setQuantity(){
        this->quantity=quantity;
    }
    int getQuantity(){
        return this->quantity;
    }
    void getUserInfo(){  //void get ng use for print 
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<this->price<<endl;
        cout<<"Quantity: "<<this->quantity<<endl;
    }
};
