     //Map sort tam key and if we put same key it will take the first means yk ah t'bong
     // We can put the key number in negative -1,-2 but Rarely to use   // .first is key    .second is value
     //We can input in map 6 way see in insert 
    
     //emplace
// #include<iostream>   
// #include<map>        
// using namespace std;  
// int main(){
//     system("cls"); 
//     map<int,string> infor;
//     //infor.insert()  
//     //infor.emplace() use muy na kr ban
//     infor.emplace(1,"Somnang");
//     infor.emplace(2,"Keang");
//     infor.emplace(3,"Koko");
//     for(auto i: infor){
//         cout<<"Key: "<<i.first<<",value: "<<i.second<<endl; //In map must call both key and value
//     }
//     return 0;
// }

    //insert, search, delete, update
#include<iostream>
#include<map>
using namespace std;
int main(){
    system("cls");
    map<int,string>info;
    info.emplace(5,"Sok");                       //1 ways
    info.insert({1,"koko"});                     //2 way 
    info.insert(pair<int, string>{3,"Somnang"}); //3 way
    info.insert(make_pair(2,"Keang"));           //4 way
    info[6]="Heng";                              //5 way
        //insert multiple value of map insert ban jren value
    info.insert({{7,"Sokpheng"},{8,"Sopi"}});    // 6way
    cout<<"number before delete: "<<endl;
    for(auto i: info){
        cout<<"key: "<<i.first<<", Value:"<<i.second<<endl;
    }
          //search for any value by specifying key by 2 way  use for search for sth in map ex search id to find name ey jg tv
    cout<<"================Search=================="<<endl;
    cout<<"This is value of key 6 using function at: "<<info.at(6)<<endl;
    cout<<"This is value of key 6 using square bracket: "<<info[6]<<endl;
          //Delete
        int key;
        cout<<"[+] insert key to delete: ";cin>>key;
         info.erase(key); //using key to delete
         cout<<"Value after delete: \n";
         for(auto i: info){
            cout<<"key:"<<i.first<<"->"<<i.second<<endl;
         }
        //update
    int keys;
    cout<<"[+] Insert key to update: ";cin>>keys;
    auto re = info.find(key);
    if(re!=info.end()){
        cout<<"[+] Insert new name: ";
        string newName;
        cin.ignore();
        getline(cin,newName);
        info[key] = newName;
    }
    cout<<"Value after updated: \n";
    for(auto i: info){
        cout<<"Key: "<<i.first<<"-> Value: "<<i.second<<endl;
    }
    return 0;
}

