#include<string>
#include<vector>
#include"../model/iphone.hpp"
#include"../repository/iphone_repo.hpp"

using namespace std;

vector<IPhone> getAllIPhones(){
    return iphoneRepositories;
}

IPhone getIPhoneById(int id){
    for(IPhone iphone:iphoneRepositories){
        if(iphone.getId()==id){
            return iphone;
        }
    }
    return {};
}

void addIPhone(IPhone iphone){
    iphoneRepositories.push_back(iphone);
    cout<<"[+] Iphone added successfully.\n";
  
}

bool deleteIPhoneById(int id){
     for(int i=0;i<iphoneRepositories.size();i++){
        if(iphoneRepositories[i].getId()==id){
            iphoneRepositories.erase(iphoneRepositories.begin()+i);
            cout<<"\n[+] Iphone with ID: "<<id<<"Deleted succesfully..."<<endl;
            return true;
        }
     }
    return false;

}
   