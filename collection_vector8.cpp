    //Create means print the vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     system("cls");
//     vector<int>numbers={1,2,3,4};
//     for(auto & n: numbers){
//         cout<<n<<endl;
//     }
//     return 0;
// }

    // Read means Insert element from the vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     system("cls");
//     vector<int> numbers;
//         //Insert the element into vector
//     for(int i=0;i<5;i++){
//         int num;
//         cout << "Enter number " << i+1 << ": ";
//         cin >> num;
//         numbers.push_back(num);
//     }
//     for(auto & i: numbers){
//         cout << i << " | ";
//     }
//     return 0;
// }

    //Delete
    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        system("cls");
        vector<int>numbers;
        //insert number into the vector
        for(int i=0;i<5;i++){
            int num;
            cout<<"Enter the number "<<i+1<<":";
            cin>>num;
            numbers.push_back(num);
        }
        cout<<"All the numbers: "<<endl;
        for(auto & n: numbers){
            cout<<n<<"|"<<endl;
        }
        cout<<"[+] Insert the element positon to delete: ";
        int pos;
        cin>>pos;
        //erase the element 
        numbers.erase(numbers.begin()+pos-1); //means begin is 1 and it + positon of element is 2 that why we -1
        cout<<"numbers after deleted: ";      //beacause we want to delete fist element 
        for(auto & n: numbers){
            cout<<n<<"|"<<endl;
        }
        return 0;
    }    
                                   

    //Not sure lom[hat ng oy jenh ]
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> numbers;
//     numbers[0]=1;
//     //Debug on 2023
//     numbers.insert(numbers.begin()+1,5);
//     numbers.push_back(2);
//     for(auto &i : numbers){
//         cout<<i<<" ";
//     }
// }

    // Update
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     system("cls");
//     vector<int>numbers={1,2,3,4,5};
//     for(auto & i: numbers){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"[+] Insert number you want to update: ";
//     int pos;
//     cin>>pos;
//     for(auto & i:numbers){
//         if(numbers.at(pos-1)==i){
//             numbers.erase(numbers.begin()+pos-1);
//             int n;
//             cout<<"[+] Insert new element to update: ";
//             cin>>n;
//             numbers.insert(numbers.begin()+pos-1,n);
//         }
//     }
//     for(auto & i:numbers){
//         cout<<i<<" ";
//     }
//     return 0;
// }

    //Self exercise
