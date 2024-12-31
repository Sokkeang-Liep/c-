#include<iostream>

using namespace std;

struct User{
    int id;
    string name;
    string email;
    string password;
    //
    void setId(int id){  //void create for set value oy id
        this->id = id;   //this -> id jea r'bos struct user id    and  =id jea r'bos para
    }
    int getId(){   //get create for get value bos id ng 
        return this->id;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
    void setEmail(string email){
        this->email = email;
    }
    string getEmail(){
        return this->email;
    }
    void setPassword(string password){
        this->password = password;
    }
    string getPassowrd(){
        return this->password;
    }
    // 
    void getUserInfo(){  //void get ng use for print 
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<<this->email<<endl;
        cout<<"Password: "<<this->password<<endl;
    }
};
