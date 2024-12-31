  //Search,Delete,Insert,Update
#include<iostream>
#include<vector>
using namespace std;

struct User{
    int id;
    string name;
    string email;
    
    void getUserInfo(){
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "--------------------" << endl;
    }
};

vector<User> users = 
{
    {1,"KoKo","koko123@gmail.com"},
    {2,"KaKa","kaka123@gmail.com"}
};

User findUserById(int id){  //use User when we want to return value as User after function performed
    for(User u: users){
        if(u.id == id){
            return u;
        }
    }
    return {}; // Return an empty User if not found
}

void deleteUserById(int id){  //use Void when we don't want to return value after function performed
    for(int i = 0; i < users.size(); i++){
        if(users[i].id == id){
            users.erase(users.begin() + i);
            cout << "\n[+] User with ID " << id << " deleted successfully." << endl;
            return;
        }
    }
    cout << "[!] User with ID " << id << " not found." << endl;
}

void insertUserById(int id){
    for(User& u: users){  
        if(u.id == id){
            cout << "[+] User with ID: " << id << " already exists." << endl;
            return;
        }
    }
    users.push_back({3, "Keang", "keang123gmail.com"});
    users.push_back({4, "Heng", "Heng123gmail.com"});
    cout << "[+] User with ID: " << id << " inserted successfully." << endl;
}

void updateUserById(int id){
    for(User& u: users){  
        if(u.id == id){
            cout << "[+] User with ID " << id << " Updated successfully" << endl;
            u.name = "Molyka";  // Update name
            u.email = "Molyka444gmail.com";  // Update email
            return;
        }
    }
    
    cout << "[!] User with ID: " << id << " Not found" << endl;
}

int main(){
    system("cls");
    
    // Search
    cout << "[+] Insert User ID to search: ";
    int id; cin >> id;
    User user = findUserById(id);
    user.getUserInfo();

    // Delete
    cout << "[+] Insert User ID to delete: ";
    cin >> id;
    deleteUserById(id);
    cout << "[+] Insert User ID to search: ";
    cin >> id;
    User user1 = findUserById(id);
    user1.getUserInfo();

    // Insert
    cout << "[+] Insert User ID to insert: ";
    cin >> id;
    insertUserById(id);
    cout << "[+] Insert User ID to search: ";
    cin >> id;
    User user2 = findUserById(id);
    user2.getUserInfo();

    // Update
    cout << "[+] Insert User ID to update: ";
    cin >> id;
    updateUserById(id);
    cout << "[+] Insert User ID to search: ";
    cin >> id;
    User user3 = findUserById(id);
    user3.getUserInfo();
    
    return 0;
}




     //Pass by value
// #include<iostream>
// using namespace std;

// void my_function(int x) {   
//    x = 50;
//    cout << "Value of x from my_function: " << x << endl;
// }

// main() {
//    int x = 10;
//    my_function(x);
//    cout << "Value of x from main function: " << x;
// }


    //Pass by reference
// #include<iostream>
// using namespace std;

// void my_function(int &x) {
//    x = 50;
//    cout << "Value of x from my_function: " << x << endl;
// }

// main() {
//    int x = 10;
//    my_function(x);
//    cout << "Value of x from main function: " << x;
// }

