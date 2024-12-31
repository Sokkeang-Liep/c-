#include<iostream>
using namespace std;
class User{
    private:
    int id;
    string userName;
    string nickName;
    string bio=" ";
    string email=" ";
    string password;
    unsigned phoneNumber;
    string profile="https://www.shutterstock.com/image-vector/vector-flat-illustration-grayscale-avatar-600nw-2264922221.jpg";
    string cover="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTZGdAIgQ1bOI1RT5ha6LYIpT5e4J72qTvB5Q&s";
public:
    void inputUserValue(){
        cout<<"[+] Input user ID: ";cin>>id;
        cout<<"[+] Input user name: ";cin>>userName;
        cout<<"[+] Input user password: ";cin>>password;
    }
    void getUserInfo(){
            cout<<"User ID: "<<id<<endl;
            cout<<"User Name: "<<userName<<endl;
            cout<<"Nick Name: "<<nickName<<endl;
            cout<<"Bio: "<<bio<<endl;
            cout<<"Email: "<<email<<endl;
            cout<<"Phone Number: "<<phoneNumber<<endl;
            cout<<"Profile Picture: "<<profile<<endl;
            cout<<"Cover Picture: "<<cover<<endl;
            cout<<"==============================\n";
        }
};
