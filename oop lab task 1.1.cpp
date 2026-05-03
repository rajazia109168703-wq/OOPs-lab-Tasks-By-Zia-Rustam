#include <iostream>
using namespace std;

// Declare structure
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member function to display student info
    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Use structure variable
    Student s1;

    // Assign values
    s1.firstName = "John";
    s1.lastName = "Doe";
    s1.rollNumber = 101;
    s1.marks = 88.5;

    // Call member function
    s1.displayStudentInfo();

    return 0;
}
