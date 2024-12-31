     //First exercise (GO TO use for run  again and again)
// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     test:
//     cout<<"Hello world!"<<endl;
//     int a = 0;
//     if(a==0){
//         goto test;
//     }
//     return 0;
// }

     //Second exercise (How to find the array length)
    //  #include<iostream>
    //  using namespace std;
    //  int main(){
    //     system("cls");
    //     int a=12;  tang ban tea 1
    //     int b[]={1,2,3,4};    //b mean 4 jg vea yk 4*4=16 hx b[0] is int = 4bite jg 16/4=4
    //     cout<<"Array length: "<<sizeof(b)/sizeof(b[0]);
    //     return 0;
    //  }
  
     //Third exercise (Acessing array element) //print all array by for loop use sizeof
// #include<iostream>    
// using namespace std;
// int main(){
//    system("cls");
//    int a=12;
//    int b[]={1,2,3,4};
//    for(int i=0;i<sizeof(b)/sizeof(b[0]);i++){
//     cout<<"Value: "<<b[i]<<endl;
//    }
//    return 0;
// }
  
     //Fourth exercise (print all array by for each use:)
// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     int a=12;
//     int b[]={1,2,3,4};
//     for(auto i:b){  //use auto when we don't know datatype 
//         cout<<"Value: "<<i<<endl;
//     }
//     return 0;
// }

     //Fifth exercise (Array of string)
// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     string name []={"sok","koko","kaka","jonh"};
//     for(string i:name){
//         cout<<i<<endl;
//     }
// }

     //sixth exercise(insert element value of array)
//  #include<iostream>
//  #include<string>
//  using namespace std;
//  int main(){
//     int size;
//     cout<<"[+] Insert number of names: ";cin>>size;
//     string names[size];
//     cin.clear();
//     for(int i=0;i<size;i++){
//         cout<<"[+] Insert name ["<<i<<" ]: ";
//         cin.ignore();
//         getline(cin,names[i]);
//     }
//     cout<<"These are all inserted names: /n";
//     for(string name:names){
//         cout<<name<<endl;
//     }
//  }

     //seven exercise(update element value of array)
    //  #include<iostream>
    //  #include<string>
    //  using namespace std;
    //  int main(){
    //     system("cls");
    //     string names[]={"Jonh","Chill guy"};
    //     cout<<"Jonh new old version: \n";
    //     cout<<names[0]<<endl;
    //     names[0]="Jonh a chile guy";
    //     cout<<"Jonh new name version:  \n";
    //     cout<<names[0]<<endl;
    //     return 0;
    //  }

     //Eight exercise (delete array)
     //Array can't delete but we use other way that like delete means j'nus
     // #include<iostream>
     // using namespace std;
     // int main(){
     //    system("cls");
     //    string names[]={"sok","keang","koko"};
     //    cout<<"All names: \n";
     //    for(string i:names){
     //        cout<<i<<" ";
     //    }
     //    cout<<"\n [+] Insert name to delete: ";
     //    string name;
     //    getline(cin,name);
     //    int size=sizeof(name)/sizeof(name[0]);
     //    for(int i=0;i<size;i++){
     //        if(names[i]==name){
     //            names[i]="";
     //            break;
     //        }
     //    }
     //    cout<<"All names after deleted: \n";
     //    for(string i: names){
     //        if(i!=" "){
     //            cout<<i<<" ";
     //        }
     //    }
     //    return 0;
     // }

     //nine exercise (sort array means reab tam lomdab) Use bubble sorting
     // #include<iostream>
     // using namespace std;
     // int main(){
     //    system("cls");
     //      int number[]={-200,-500,10,20,-20,90,-800,-2};  //ber lek mean 8 element trov compare 16 dong
     //      int length=sizeof(number)/sizeof(number[0]);    // element*2 = amount compare
     //      for(int i=0;i<length;i++){                       //means 4*8=32 and 32/4=8;
     //        for(int j=0;j<length-1;j++){
     //            if(number[j]>number[j+1]){  // > pii toch tv thom  just do   < pii thom tv toch vinh
     //                int temp = number[j];
     //                number[j]=number[j+1];
     //                number[j+1]=temp;
     //            }
     //        }
     //      }
     //      cout<<"Sorted array in ascending order: ";
     //      for(int i=0; i<length;i++){
     //        cout<<number[i]<<" ";
     //      }
     //      return 0;
     // }
