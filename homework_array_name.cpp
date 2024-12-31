#include<iostream>
using namespace std;
int main(){
    system("cls");
    string name[]={"Sok","Keang","Somnang","Ing","Roza","Molyka","Hong","Channa"};
    int length=sizeof(name)/sizeof(name[0]);
    for(int i=0;i<length;i++){
        for(int j=0;j<length-1;j++){
            if(name[j]>name[j+1]){
                string temp      = name[j];
                       name[j]   = name[j+1];
                       name[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array of name in order: ";
          for(int i=0; i<length;i++){
            cout<<name[i]<<" ";
          }
          return 0;
}