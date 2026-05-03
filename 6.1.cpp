#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string name;
    double price;
public:
    Product(string n, double p) : name(n), price(p) {}
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

class Electronics : public Product {
private:
    int warrantyYears;
public:
    Electronics(string n, double p, int w)
