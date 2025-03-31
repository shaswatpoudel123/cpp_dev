/*17. Write a program to initialize non-public data members and appropriate encapsulation
mechanisms to set and return values of those members.*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;  // Non-public data members
    int age;
    double salary;

public:
    // Constructor to initialize data members
    Employee(string n, int a, double s) : name(n), age(a), salary(s) {}

    // Getter methods to return values of private data members
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    double getSalary() const {
        return salary;
    }

    // Setter methods to modify values of private data members
    void setName(const string& n) {
        name = n;
    }

    void setAge(int a) {
        if (a > 0)  // Ensure valid age
            age = a;
        else
            cout << "Invalid age!" << endl;
    }

    void setSalary(double s) {
        if (s >= 0)  // Ensure valid salary
            salary = s;
        else
            cout << "Invalid salary!" << endl;
    }

    // Display function to show employee details
    void display() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Age: " << age << endl;
        cout << "Employee Salary: Rs. " << salary << endl;
    }
};

int main() {
    // Create an Employee object with initial values
    Employee emp1("John Doe", 30, 50000.0);

    // Display initial employee details
    cout << "Initial Employee Details:" << endl;
    emp1.display();

    // Modify employee details using setter methods
    emp1.setName("Jane Smith");
    emp1.setAge(35);
    emp1.setSalary(60000.0);

    // Display updated employee details
    cout << "\nUpdated Employee Details:" << endl;
    emp1.display();

    // Attempt to set invalid data
    emp1.setAge(-5);  // Invalid age
    emp1.setSalary(-1000);  // Invalid salary

    return 0;
}
