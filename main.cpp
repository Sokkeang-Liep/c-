  //How to p'dach file 
  
#include<iostream>
#include "service/logic.hpp"
#include"model/user.hpp"
 
using namespace std;
int main(){

      //bos service logic
//  int a=2, b=3;
//  swapFromLogic(a,b);
//  cout<<"a:"<<a<<endl;
//  cout<<"b:"<<b<<endl;
//  return 0;

       //bos model user
  User user;
  user.setId(1);
  user.setName("Keang");
  user.setEmail("Keang123@gamil.com");
  user.setPassword("@#^%$");
  user.getUserInfo();
  return 0;
} 