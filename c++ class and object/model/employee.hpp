#include<iostream>
#include<iomanip>  // Include the iomanip header for setw
using namespace std;
class Employee{
    private:
      int id;
      string name;
      string position;
    public:
    //constructor
        Employee(int id, const string& name, const string& position)
        : id(id), name(name), position(position) {}

    //Getters
    int getId() const { return id; }
    string getName() const { return name; }
    string getPosition() const { return position; }

    // Setters
    void setName(const std::string& newName) { name = newName; }
    void setPosition(const std::string& newPosition) { position = newPosition; }

    // Display Employee details
    void display() const {
        cout <<setw(10) << id <<setw(20) << name <<setw(20) << position << '\n';
    }

};



