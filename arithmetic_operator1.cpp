#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num1,num2;
    cout<<"[+] Insert num1: ";cin>>num1;
    cout<<"[+] Insert num2: ";cin>>num2;
    int sum= num1+num2;              // (+) sum
    int sub= num1-num2;              // (-) subtract
    int mul= num1*num2;              // (*) multiply
    double div= (double)num1/num2;   // (/) Divide    (If we put only double div=num1/num2: The result only pneak kot so if we put (double) it will show all  0.5 )
    double mol=num1% num2;           // (%) Modulus    double div= (double)num1/num2 : It's call cash

    cout<<"Result of sum: "<<sum<<endl;  //Or cout<<"\nResult of sum"<<sum;
    cout<<"Result of sub: "<<sub<<endl;  //Or cout<<"\nResult of sub"<<sub;
    cout<<"Result of mul: "<<mul<<endl;  //Or cout<<"\nResult of mul"<<mul;
    cout<<"Result of div: "<<div<<endl;  //Or cout<<"\nResult of div"<<div;
    cout<<"Result of mol: "<<mol<<endl;  //Or cout<<"\nResult of mol"<<mol;
    
     
     return 0;

}