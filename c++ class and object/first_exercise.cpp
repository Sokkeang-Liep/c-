#include<iostream>
using namespace std;
class Person{
     private:
         int id;
         string name;
         int age;
    public:
        void inputPersonInfo(){
            cout<<"[+] Input ID: ";cin>>id;
            cout<<"[+] Input Person name: ";cin>>name;
            cin.ignore();
            cin.clear();
            cout<<"[+] Input Person age: ";cin>>age;   
        }
        void getPersonInfo(){
            cout<<"Person ID: "<<id<<endl;
            cout<<"Person name: "<<name<<endl;
            cout<<"Person age: "<<age<<endl;
        }
};
int main(){
    system("cls");
    Person person1;
    cout<<"===========Person1==========="<<endl;;
    person1.inputPersonInfo();
    person1.getPersonInfo();
    Person person2;
    cout<<"===========Person2==========="<<endl;;
    person2.inputPersonInfo();
    person2.getPersonInfo();
}