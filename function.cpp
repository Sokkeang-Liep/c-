      //keyword void no return instead of void has return means other data type

      //Return type has parameter
// #include<iostream>
// using namespace std;   
// double khCurrencyCinvertor(double usd){
//     //  double result = usd*4000;
//     //  return result;    //First way
//     return usd*4000;      //second way write muy na kr ban
// }
// double convertFromKHToUSD(double khCurrency){
//     return khCurrency /4000;
// }
// int main(){
//     system("cls");
//            //Input
//     // double money;
//     // cout<<"Insert your usd money: ";cin>>money;
//     // double result=khCurrencyCinvertor(money);
//     // cout<<"Result of currency conversion: "<<result<<endl;
//     // return 0;
//            //no input dak domlai mk srab
//     double result=khCurrencyCinvertor(1.5);
//     double result1=convertFromKHToUSD(600000);
//     cout<<"1.5$ to KH currency conversion: "<<result<<endl;
//     cout<<"600000 to USD currency conversion: "<<result1<<endl;
//      return 0;
// }  

      //Return type no parameter
// #include<iostream>
// using namespace std;
// string generaterPassword(){
//     string str=""; //=" " dak kr ban ot kr ban means string str;
//     char buffer ='A'; //buffer is charater
//     for(int i=0;i<100;i++){
//         str= buffer;  //or str+=buffer;
//         buffer++;  
//     }
//     return str;
// }
// int main(){
//     system("cls");
//     string myPassword=generaterPassword();
//     cout<<"This is my password: "<<myPassword;
//     return 0;
// }

      //No return type has parameter k'leng (welcome) & no return type no para (k'leng greeting)
// #include<iostream>
// using namespace std;
// void thumbnail(string yourProfileName){
//     cout<<"======================================"<<endl;
//     cout<<"=> Welcome "<<yourProfileName<<endl;
//     cout<<"======================================"<<endl;
// }
// void greeting(){
//     cout<<"Greeting!"<<endl;
//     cout<<"How can I help you?"<<endl; 
// }
// int main(){
//    thumbnail("kaka");
//    greeting();
//    return 0;
// }

      

      
      //Template     is the user data type del oy user defind type douy klun eng
      // Use pel koel bomnong doch knea hz khos data type
// #include<iostream>
// using namespace std;
// template <typename P> //P represent data type  
// void sum(P a, P b){
//       cout<<"Sum result: "<<a+b<<endl;
// }
// int main(){
//  sum(2.3,2.2);
//  sum(2,4);
//  sum('A','B'); //however dak letter vea jenh jea lek
// return 0;
// }

      //Pass by value      need many space and it uses old variable just do name
// #include<iostream>
// using namespace std;
// void sum(int a,int b){ 
//       cout<<"Sum: "<<a+b;
// }
// int main(){
//       int x=2 , y=3;
//       sum(x,y);
//       return 0;
// }

      //Pass by reference 
// #include<iostream>
// using namespace std;
// void swap(int &a, int &b){
//       int temp =a;
//              a =b;
//              b =temp;
// }
// int main(){
//       int x=2, y=3;
//       cout<<"x: "<<x<<endl;
//       cout<<"y: "<<y<<endl;
//       swap(x,y);
//       cout<<"After swap: "<<endl;
//       cout<<"x: "<<x<<endl;
//       cout<<"y: "<<y<<endl;
// }
      

    


      

