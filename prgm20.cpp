#include <iostream>
using namespace std;

class Employeee {
public:
    int id;
    string name;
    float salary;

    void getData() {
        cout << "Enter ID, Name, and Salary: ";
        cin >> id >> name >> salary;
    }

    void displayData() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employeee e1, e2, e3;

    cout << "Enter data for Employee 1:\n";
    e1.getData();
    cout << "Enter data for Employee 2:\n";
    e2.getData();
    cout << "Enter data for Employee 3:\n";
    e3.getData();




    

    cout << "\nEmployee Details:\n";
    e1.displayData();
    e2.displayData();
    e3.displayData();

    return 0;
}