#include<iostream>
using namespace std;
int main(){
    system("cls");
     
      //FIRST exercise
     int a;  //When we put a=1 convert a to binary is 1= 001 , when b=2 means 2=010 
     int b;  // After that we use Bitwise operator and convert the result to decimal so the final result is 0and 3;
     cout<<"Insert a: ";cin>>a;                    //a=1=001
     cout<<"Insert b: ";cin>>b;                    //b=2=010
                                       // AND for a&b   =000 => 0 decimal
     int c= a&b;                       // OR for a|b    =011 => 3 decimal  
     int d= a|b;
     cout<<"This is the result of Bitwise AND: "<<c<<endl;
     cout<<"This is the result of Bitwise OR: "<<d<<endl;


     //OR 

     // int a,b;
     // cin>>a>>b;    dak jg yk mg lern 
     // hx pel yg run dak lek muy sin hx space jam dak lek muy tt


    return 0;


}