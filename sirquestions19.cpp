/*19. Create a base class Vehicle, and two derived classes Car and Truck that inherit virtually from
Vehicle. Create another class PickupTruck that inherits from both Car and Truck. Access Vehicle's
members through an object of PickupTruck.*/
#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    string make;
    int year;

public:
    // Constructor to initialize Vehicle
    Vehicle(string m = "", int y = 0) : make(m), year(y) {}

    // Display vehicle details
    void displayVehicle() {
        cout << "Make: " << make << ", Year: " << year << endl;
    }
};

// Derived class Car that virtually inherits from Vehicle
class Car : virtual public Vehicle {
protected:
    int doors;

public:
    // Constructor to initialize Car and Vehicle
    Car(string m = "", int y = 0, int d = 4) : Vehicle(m, y), doors(d) {}

    // Display car details
    void displayCar() {
        cout << "Car - Doors: " << doors << endl;
    }
};

// Derived class Truck that virtually inherits from Vehicle
class Truck : virtual public Vehicle {
protected:
    double loadCapacity;

public:
    // Constructor to initialize Truck and Vehicle
    Truck(string m = "", int y = 0, double load = 1000.0) : Vehicle(m, y), loadCapacity(load) {}

    // Display truck details
    void displayTruck() {
        cout << "Truck - Load Capacity: " << loadCapacity << " kg" << endl;
    }
};

// Derived class PickupTruck that inherits from both Car and Truck
class PickupTruck : public Car, public Truck {
public:
    // Constructor to initialize PickupTruck, Car, and Truck
    PickupTruck(string m = "", int y = 0, int d = 4, double load = 1000.0) 
        : Vehicle(m, y), Car(m, y, d), Truck(m, y, load) {}

    // Display all details (from Vehicle, Car, and Truck)
    void displayPickupTruck() {
        displayVehicle();  // Accessing Vehicle's display function
        displayCar();      // Accessing Car's display function
        displayTruck();    // Accessing Truck's display function
    }
};

int main() {
    // Create a PickupTruck object
    PickupTruck pt("Ford", 2023, 4, 1500.0);

    // Display details of PickupTruck
    cout << "PickupTruck Details: " << endl;
    pt.displayPickupTruck();

    return 0;
}
