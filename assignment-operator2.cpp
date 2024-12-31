         // assignment operator such as
// = means give value of variable
// +=  It adds right to the left  eg: a+=b      => a=a+b 
// -=  It subtracr right to the left  eg: a-=b  => a=a-b
// *=  It multiply right to the left  eg: a*=b  => a=a*b
// /=  It divide left with the right  eg: a/=b  => a=a/b
// %=  It modulus same as/=           eg: a%=b  => a=a%b

#include<iostream>
using namespace std;
int main(){
    system("cls");
          // FIRST exercise
    // int oldValue =2;
    // int newValue =3;
    // oldValue +=newValue;   //Which means oldvalue = oldvalue + newvalue
    // cout<<"New value of sum: "<<oldValue;
    // return 0;

          //Second exercise
  double cashAmountPresent =0.5;
  double depositCashAmount;
  cout<<"[😃] Present cash amount: "<<cashAmountPresent<<endl;
  cout<<"======Welcome to ABA QR======="<<endl;
  cout<<"[😁] Enter amount of cash to transfter: ";
  cin>>depositCashAmount;
  cashAmountPresent+=depositCashAmount;

  cout<<"[😍] Cash amount after transftered: "<<cashAmountPresent<<endl;
  

  
  return 0;

}