#include <iostream>
using namespace std;


struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

   
    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    
    Student* ptr = new Student[n];


    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "First Name: ";
        cin >> ptr[i].firstName;
        cout << "Last Name: ";
        cin >> ptr[i].lastName;
        cout << "Roll Number: ";
        cin >> ptr[i].rollNumber;
        cout << "Marks: ";
        cin >> ptr[i].marks;
    }


    cout << "\nStudent Information:\n";
    for (int i = 0; i < n; i++) {
        ptr[i].displayStudentInfo();
    }

 
    delete[] ptr;

    return 0;
}
