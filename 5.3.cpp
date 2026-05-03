#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    double salary;

public:
    void setEmployee(string n, double s) {
        name = n;
        salary = s;
    }

    void display_employee() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class: Developer
class Developer : public Employee {
private:
    string programming_language;

public:
    void setDeveloper(string n, double s, string lang) {
        setEmployee(n, s);
        programming_language = lang;
    }

    void display_developer() {
        display_employee();
        cout << "Programming Language: " << programming_language << endl;
    }
};

// Derived class: Designer
class Designer : public Employee {
private:
    string design_tool;

public:
    void setDesigner(string n, double s, string tool) {
        setEmployee(n, s);
        design_tool = tool;
    }

    void display_designer() {
        display_employee();
        cout << "Design Tool: " << design_tool << endl;
    }
};

// Main function
int main() {
    Developer dev;
    Designer des;

    // Set values
    dev.setDeveloper("Ali", 70000, "C++");
    des.setDesigner("Sara", 65000, "Photoshop");

    // Display information
    cout << "Developer Details:" << endl;
    dev.display_developer();

    cout << "\nDesigner Details:" << endl;
    des.display_designer();

    return 0;
}
