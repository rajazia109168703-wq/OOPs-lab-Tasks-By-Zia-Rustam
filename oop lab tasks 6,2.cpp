#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string type;
public:
    Vehicle(string t) : type(t) {
        cout << "Vehicle constructor called: " << type << endl;
    }
};

class Car : public Vehicle {
protected:
    string brand;
public:
    Car(string t, string b) : Vehicle(t), brand(b) {
        cout << "Car constructor called: " << brand << endl;
    }
};

class ElectricCar : public Car {
private:
    int batteryCapacity;
public:
    ElectricCar(string t, string b, int capacity) : Car(t, b), batteryCapacity(capacity) {
        cout << "ElectricCar constructor called: " << batteryCapacity << " kWh" << endl;
    }
    
    void display() {
        cout << "Type: " << type << endl;
        cout << "Brand: " << brand << endl;
        cout << "Battery: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar tesla("Electric", "Tesla", 75);
    tesla.display();
    return 0;
}
