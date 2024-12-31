#include<string>
#include<vector>
#include"model/employee.hpp"

class EmployeeCrud{
    private:
      vector<Employee>employee;
    public:
    //Add
      void createEmployee(int id,string name, string position){
        Employee newEmployee(id,name,position);
        employee.push_back(newEmployee); 
      }
    // Read
        void readEmployees() const {
            if (employee.empty()) {
                cout << "No employees available.\n";
                return;
            }
            cout << setw(10) << "ID" << setw(20) << "Name" << setw(20) << "Position" << '\n';
            for (const auto& employee : employee) {
                employee.display();
            }
        }

        // Update 
        bool updateEmployee(int id, string newName, string newPosition) {
            for (auto& employee : employee) {
                if (employee.getId() == id) {
                    employee.setName(newName);
                    employee.setPosition(newPosition);
                    return true;  // Success
                }
            }
            return false;  // Employee not found
        }

        // Delete 
        bool deleteEmployee(int id) {
            for (auto it = employee.begin(); it != employee.end(); ++it) {
                if (it->getId() == id) {
                    employee.erase(it);
                    return true;  // Success
                }
            }
            return false;  // Employee not found
        }
};
