#include<iostream>
#include"user.hpp"
using namespace std;
 int main(){
    User user(1,"Koko",12);
    User user1(2,"Koka",18);
    user.getUserInfo();
    user1.getUserInfo();
    return 0;
 }