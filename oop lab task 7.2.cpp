#include <iostream>
using namespace std;

// Shared Calculator class - created/managed externally
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    int multiply(int a, int b) {
        return a * b;
    }
};

// Student class - uses Calculator via aggregation
class Student {
private:
    string name;
    Calculator* calc;  // Aggregation: Student has a reference to Calculator
    
public:
    Student(string studentName, Calculator* calculator) {
        name = studentName;
        calc = calculator;  // Students just refer to shared calculator
    }
    
    void solveAddition(int a, int b) {
        int result = calc->add(a, b);
        cout << name << " used
