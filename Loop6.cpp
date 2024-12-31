#include<iostream>
using namespace std;
    //First exercise (For loop)
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<"Hello world"<<endl;
//     }
//     return 0;
// }

    //Second exercise (For loop) (pel run jenh letter muy muy)
// int main(){
//     system("cls");
//     string name="keang";
//     for(int i=0;i<name.length();i++){   //name.length() pel run tv der name muy muy 
//         _sleep(500);    //sleep=delay pel vea jenh muy muy 500= 5 mili sec
//         cout<<name[i];
//     }
//     return 0;
// }
     
    //Third exercise (For loop) (same as above but input name)
// int main(){
//     system("cls");
//     string name;
//     cout<<"[+] Insert your name: ";
//     getline(cin,name);  //use getline pel name yg mean space vea yk all but ber use cin name yg krouy space vea ot yk
//     for(int i=0;i<name.length();i++){
//         _sleep(200); //OR  this_thread::sleep_for(chropno::seconds(1));
//         cout<<name[i];
//     }
//     return 0;
// }

    //Fourth exercise ( while loop)
    int main(){
        system("cls");
        while(true){
             cout<<"============== Product Stock ================="<<endl;
             cout<<"1. List all products\n";
             cout<<"2. Search Product by ID\n";
             cout<<"3. Add new Product\n";
             cout<<"4. Delete Product by\n";
             cout<<"5. Exit"<<endl;
             cout<<"==============================================\n";
    int opt;
    cout<<"[+] Insert new Option: ";cin>>opt;
    switch(opt){
        case 1:{
            cout<<"List all products";
           break;
        }
           
        case 2:{
            cout<<"Search product by ID";
           break;
        }
           
        case 3:{
            cout<<"Add new Product"<<endl;
            break;
        }
            
        case 4:{
            cout<<"Delete product by ID"<<endl;
            break;
        }
            
        case 5:{
            exit(0);
        }
            
        default: 
            cout<<"Default";
        };
    }
    }
