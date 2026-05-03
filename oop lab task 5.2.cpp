#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void input_person() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class (inherits Person)
class Employee : public Person {
protected:
    int employee_id;

public:
    void input_employee() {
        cout << "Enter Employee ID: ";
        cin >> employee_id;
    }

    void display_employee() {
        cout << "Employee ID: " << employee_id << endl;
    }
};

// Derived class (inherits Employee)
class Manager : public Employee {
private:
    string department;

public:
    void input_manager() {
        cout << "Enter Department: ";
        cin >> department;
    }

    void display_manager() {
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    // Accept input
    m.input_person();
    m.input_employee();
    m.input_manager();

    cout << "\n--- Complete Information ---\n";

    // Display all information
    m.display_person();
    m.display_employee();
    m.display_manager();

    return 0;
}
