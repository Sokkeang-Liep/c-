
///////////VECTOR//////////////

// Create 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     system("cls");
//     vector<int> numbers={10,20,30};
//     cout<<"This is the original number: "<<endl;
//     for(int i=0;i<numbers.size();i++){
//         cout<<numbers[i]<<endl;
//     }
//     numbers.insert(numbers.begin()+1,15);
//     numbers.insert(numbers.end(),35);
//     cout<<"This is nuumber after inserted: "<<endl;
//     for(int i=0;i<numbers.size();i++){
//         cout<<numbers[i]<<endl;
//     }
//     return 0;
// }
  
 //Read
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     system("cls");
//     vector<int> values={1,2,3,4,5,6};
//     cout<<"The present value"<<endl; 
//     for(int i=0;i<values.size();i++){
//         cout<<values[i]<<endl;
//     }
//     cout<<"\n Reading values by using at() function:"<<endl;
//     for(int i=0;i<values.size();i++){
//         cout<<"Element at index: "<<i<< "=" <<values.at(i)<<endl;
//     }
//     return 0;
// }
 
 //Update 
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// int main(){
//     system("cls");
//     // Create a vector with initial values
//     vector<int> numbers={1,2,3,4,5};
//     cout<<"The original numbers: "<<endl;
//     for(int i=0;i<numbers.size();i++){
//        cout<<numbers[i]<<endl;
//     }
//     // Assign new of values to the vector (replacing previous content)
//     numbers.assign({10,20,30,40,50});
//     cout<<"Updated vector after assign number: "<<endl;
//     for(int i=0;i<numbers.size();i++){
//         cout<<numbers[i]<<endl;
//     }
//     return 0;
// }

// Delete 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     system("cls");
//     vector<string>names={"koka","Sting","Fanta"};
//     cout<<"This is the names of drink: "<<endl;
//     for(int i=0;i<names.size();i++){
//       cout<<names[i]<<endl;
//     }
//     names.erase(names.begin()+1);
//     cout<<"This is the name after erased: "<<endl;
//     for(int i=0;i<names.size();i++){
//         cout<<names[i]<<endl;
//     }
//     return 0;
// }

 //////////////SET ////////////

 //create
//  #include<iostream>
//  #include<set>
//  using namespace std;
//  int main(){
//     system("cls");
//     set<string>names={"Sok","Panha","Nita"};
//     cout<<"The students names: "<<endl;
//     for(string name:names){
//         cout<<name<<"\n";
//     }
//     names.insert(names.begin(),"Molyka");
//     names.insert(names.end(),"Hong");
//     cout<<"This is the name after inserted: "<<endl;
//     for(string name:names){
//         cout<<name<<"\n";
//     }
//     return 0;
//  }
 
// //Read
// #include <iostream>
// #include <set>
// #include <string>
// using namespace std;
// int main() {
//      system("cls");
//     set<string> fruit = {"apple", "banana", "cherry", "date", "elderberry"};
//     cout << "Reading elements using a range-based for loop:" <<endl;
//     for ( string value : fruit) {
//       cout << value <<endl;
//     }
//     return 0;
// }

// delete
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     system("cls");
//     set<int>numbers = {1, 2, 3, 4, 5};
//     cout << "Original Set: "<<endl;
//     for (int x : numbers) {
//         cout << x <<endl;
//     }
//     numbers.erase(3);
//     cout << "Set after deleting 3: "<<endl;
//     for (int x : numbers) {
//         cout << x <<endl;
//     }
//     return 0;
// }


//////////// Map/////////////

//Create
// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;
// int main() {
//     system("cls");
//     map<string, int> myMap;
//     // Using insert() with std::make_pair
//     myMap.insert(make_pair("Alice", 42));
//     // Using emplace()
//     myMap.emplace("Bob", 30);
//     // Display the map to verify insertion
//     cout << "Contents of the map:" <<endl;
//     for ( auto& pair : myMap) {
//         cout << pair.first << " => " << pair.second <<endl;
//     }
//     return 0;
// }


  //Read
// #include <iostream>
// #include <map>
// #include<string>
// using namespace std;
// int main() {
//     system("cls");
//     map<string, int> myMap;
//     myMap["apple"] = 5;
//     myMap["banana"] = 10;
//     myMap["cherry"] = 20;
//         cout << "Value for apple: " << myMap.at("apple")<<endl;  
//         cout << "Value for banana:" << myMap.at("banana")<<endl;  
//         cout << "Value for cherry:" <<myMap.at("cherry")<<endl; 
//     return 0;
// }

  
  //Delete
// #include <iostream>
// #include<map>
// #include<string>
// using namespace std;
// int main() {
//     system("cls");
//     map<int, string>numbers= {{1, "one"},{2, "two"},{4, "four"}};
//     cout<<"The present numbers: "<<endl;
//     for(auto&p :numbers){
//         cout<<p.first<< ":"<<p.second<<'\n';
//     }    
//     numbers.erase(2);
//     cout<<"Numbers after delete:"<<endl;
//     for (auto &p : numbers)
//         cout << p.first << ": " << p.second << '\n';
//     return 0;
// }






// #include <iostream>
// #include <set>

// int main() {
//     std::set<int> mySet = {1, 2, 3, 4, 5};

//     // Reading elements using range-based for loop
//     cout << "Set elements: ";
//     for (int x : mySet) {
//         std::cout << x << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }



