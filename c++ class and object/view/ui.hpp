#include<iostream>
#include"../service/iphone_service.hpp"
#include"table.hpp"

using namespace std;


class UI{
    private:
        static int insertOption(){
            int choice;
            cout<<"[+] Enter your choice: ";cin>>choice;
            return choice;
        }
        static void welcome(){
            cout<<"-------------------------------------------\n";
            cout<<"   Welcome to IPhone Management System     \n";
            cout<<"-------------------------------------------\n";
        }
        static void option(){
            cout<<"1. Add a new iPhone\n";
            cout<<"2. Delete an iPhone\n";
            cout<<"3. View all iPhones\n";
            cout<<"4. Exit\n";
            cout<<"-------------------------------------------\n";
        }
        public:

        static void home(){
            welcome();
            while(true){
            option();
                switch(insertOption()){
                    case 1:{
                        cout<<"[+] Add a new iPhone\n";
                        int id;
                        string model;
                        double price;
                        cout<<"Insert ID: ";cin>>id;
                        cout<<"Insert Model: ";cin>>model;
                        cout<<"Insert price: ";cin>>price;
                        IPhone newphone(id,model,price);
                        addIPhone(newphone);
                        addIPhone({});
                        break;
                    }
                    case 2:{
                        cout<<"[+] Delete an iPhone\n";
                        int id;
                        cout<<"Insert ID to delete: ";cin>>id;
                        deleteIPhoneById(id);
                        break;
                    }
    
                    case 3:{
                        cout<<"[+] View all iPhones\n";
                        vector<vector<string>> iphones;
                        // columns  
                        vector<string> columns = {"ID", "Model", "Price"};
                        for(IPhone p : getAllIPhones()){
                            vector<string> data = {to_string(p.getId()), p.getModel(), to_string(p.getPrice())};
                            iphones.push_back(data);
                        }
                        printTable(iphones, columns);
                        break;                    
                    }
                    case 4:{
                        cout<<"[+] Exiting...\n";
                        exit(0);
                    }
                    default:{
                        cout<<"[-] Invalid choice. Please try again.\n";
                    }
                }
            }
        }
};

