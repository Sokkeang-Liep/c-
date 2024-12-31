     //pointer is a special variable that store address rbos other variable  data tpye rbos pointer* must be the same as variable

    /////Simple print 
// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//          
//     // int a=10;
//     // int *ptr=&a;
//     // cout<<"Adress of A: "<<&a<<endl;              //to print adress bos a in computer trov dak &
//     // cout<<"Adress of A in pointer: "<<ptr<<endl;  //ber dak tea ptr jg vea jenh adress bos a because ptr=a 
//     // cout<<"Adress of pointer: "<<&ptr<<endl;      //but &ptr jg jeng adress bos ptr vinh beacuse vea kr mean adress dea
//     // cout<<"Value of pointer:  "<<*ptr<<endl;
//     // cout<<"Value of A: "<<a<<endl;
//           ///////Update A by uisng pointer
//     int a=10;
//     int *ptr=&a;
//         *ptr=100; //pel yg dak ptr=100 jg vea brab computer tha krob adress doch vea =100 all 
//     cout<<"Value of A: "<<a<<endl;
//     cout<<"Value of A in pointer: "<<*ptr<<endl;
//     return 0;
// }
  
  //pointer useful for when we want to update just mean * yg bach yk value ng tv all te just trov ka adress
  //pointer store adress jg update ey trov ka adress is enough

   /////point tor knea
// #include<iostream>  //pointer tea change muy ker change all
// using namespace std;
// int main(){
//     string name= "koko";
//     string *ptr=&name;
//     cout<<"Name: "<<name<<endl;
//     cout<<"Name in pointer: "<<*ptr<<endl;
//     string *p=ptr;
//     *p="kaka";
//     cout<<"Name in ptr after double point: "<<name<<endl;
// }
 
   /////pointer with array
// #include<iostream>  //pointer ber dak [2] hz acess 4 kr ban der because vea yk pii ram mk tea ber use only array tver jg error
// using namespace std;
// int main(){
//     int *n= new int[5];
//     n[0]=1;
//     n[1]=2;
//     for(int i=0;i<5;i++){
//      cout<<"The value:"<<n[i]<<endl; //use muy na kr ban for print 
//     // cout<<"Value: "<<*(n+1)<<endl;
//     }
//     return 0;

// }

   
// #include <iostream>
// #include <set>
// #include <string>
// using namespace std;
// struct Student {
//     string name;
//     int age;
//     double grade;
//     // បង្កើត operator< ដើម្បីប្រៀបធៀប Student
//     bool operator<(const Student& other) const {
//         return name < other.name;  // ប្រើឈ្មោះសិស្សសម្រាប់ការប្រៀបធៀប
//     }
// };
// int main() {
//     system("cls");
//     set<Student> students;
//     students.insert({"Nika", 18, 85.5});
//     students.insert({"Kanha", 20, 90.0});
//     students.insert({"Sopheap", 22, 78.0});
//     students.insert({"Nika", 19, 89.5});  

//     cout << "Students in the set:" << endl;
//     for (const auto& student : students) {
//         cout << "Name: " << student.name << endl;
//         cout << "Age: " << student.age << endl;
//         cout << "Grade: " << student.grade << endl;
//         cout << "------------------------" << endl;
//     }
//     return 0;
// }









   
   
   