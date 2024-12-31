  //Struct is a user defined data type that composite data type that group together virable of different  data under a single name
  //name of struct follow by paskal case which a BIG letter fisrt like struct Person, User, Stdent not struct person,user

        //Simple struct
// #include<iostream>
// #include<string>
// #include<vector> 
// using namespace std;
// struct User{
//     int id;
//     int age;
//     string name;
//     string email;
//     string password;   //for password and phone number must to use string
//     string phoneNumber;
// };
// int main(){
//     system("cls");
//     User user1;
//     user1.id=1;
//     user1.age=25;
//     user1.name="Keang";
//     user1.email="Keang@gmail.com";
//     user1.password="password123";
//     user1.phoneNumber="012335566";
//     cout<<"User1 Name"<<user1.name<<endl;
//     cout<<"User1 Age"<<user1.age<<endl;
//     cout<<"User1 Email"<<user1.email<<endl;
//     cout<<"User1 Password"<<user1.password<<endl;
//     cout<<"User1 phoneNumber"<<user1.phoneNumber<<endl;
//     cout<<"=========================================="<<endl;
//     //
//     User user2;
//     user2.id=2;
//     user2.age=30;
//     user2.name="Heng";
//     user2.email="Heng@gaim.com";
//     user2.password="Heng123";
//     user2.phoneNumber="081223454";
//     cout<<"User2 Name"<<user2.name<<endl;
//     cout<<"User2 Age"<<user2.age<<endl;
//     cout<<"User2 Email"<<user2.email<<endl;
//     cout<<"User2 Password"<<user2.password<<endl;
//     cout<<"User2 phoneNumber"<<user2.phoneNumber<<endl;
//     //
//     vector<User>users;
//     users.push_back(user1);
//     users.push_back(user2);
//     return 0;
// }   
 
        //Strcut with vector
#include<iostream>
#include<vector>
using namespace std;
struct Person{
    int id;
    string name;
    int age;
    string email;
    string password;
    string numberPhone;
};
//
int main(){
    vector<Person>persons;
    Person person1;
    person1.id=1001;
    person1.name="Koka";
    person1.age=20;
    person1.password="Ka12234";
    person1.numberPhone="02325668";
    // dak tea muy jg kr ban doch P2 jg 
    Person person2={1002,"Jonh",30,"J$2000","010657354"};
    Person person3={1003,"Keang",21,"Pass23544","01075635767"};
     persons.push_back(person1);
     persons.push_back(person2);
     persons.push_back(person3);

    cout<<"[+] Insert person ID: ";
    int id;cin>>id;
    for(Person per: persons){
        if(per.id==id){
            cout<<"'ID: "<<per.id<< endl;
            cout<<"Name: "<<per.name<<endl;
        }
    }
    return 0;
}
