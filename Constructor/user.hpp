
//Constructor is a special method which is name same as class and no return data type.
//make to create obj and inisolize value of 

#include<iostream>
using namespace std;
 class User{
    private:
      int id;
      string name;
      int age;
    public:
      //contructor with no parameter
    User(){}
      //contructor with parameter
    User(int id, string name, int age){
        this->id=id;      //jab domlai pii class to para
        this->name=name;  
        this->age=age;
    }
    void getUserInfo(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"======================"<<endl;
    }

 };

