#include<iostream>
using namespace std;
     //First exercise
// int main(){
//     system("cls");
//     int a=2;
//     switch(a){
//          case 1:
//             cout<<"Number one ";
//             break;
//         case 2:
//             cout<<"Number two ";
//             break;
//         default:
//            cout<<"Default ";
//     };
     //return 0;
// }

     //Second exercise
int main(){
    system("cls");
    cout<<"=====================Product Stock=======================";
    cout<<"1. List all product\n";
    cout<<"2. Search product by ID\n";
    cout<<"3. Add new Product\n";
    cout<<"4. Delete product\n";
    cout<<"5. Exit";
    cout<<"=========================================================\n";
    int opt;
    cout<<"Insert new option: ";cin>>opt;
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
        cout<<"Add new product";
          break;
      }
          
        case 4:{
          cout<<"Delete prodcut";
          break;
        }
          
        case 5:{
          exit(0);
        }
          
        default:
        cout<<"Default";
    };
    return 0;
}

     