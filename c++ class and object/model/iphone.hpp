#include<iostream>
#pragma once    //We use this when we run code we don't want to include the duplicate header file 

using namespace std;

class IPhone{
    // fields
    private:
        int id;
        string model;
        double price;

    public:
    // constructor
        IPhone(int id, string model, double price){  //para constructor.It's allow creating an Iphone obj by directly the variable
            this->id = id;  //this->id refer to class if field
            this->model = model;  // = model refer to constructor parameter
            this->price = price;
        }
        IPhone(){}
        //These are functions that allow access to the private fields of the class
        int getId(){ return id; }
        string getModel(){ return model; }
        double getPrice(){ return price; }
        //method
        
};