/*5. Define a virtual base class. Write a program to create a base class i.e. Employee. Derive two
classes: administrative and academic from the base class. Derive another class HOD from these
two derived classes. Create appropriate data members and member functions in each class to
show the implementation of a virtual base class.*/
/*A virtual function is those type of functions which are declared with in with in a base class 
and is redefine( overriden )by a derived class */
/*A pure function */
#include <iostream>
#include <string>
using namespace std;

// Virtual Base Class
class Employee {
protected:
    string name;
    int id;
    
public:
    // Constructor
    Employee(string n, int i) : name(n), id(i) {}

    // Virtual function to display information
    virtual void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }

    // Virtual Destructor
    virtual ~Employee() {}
};

// Derived class for Administrative Employee
class Administrative : virtual public Employee {
protected:
    string department;

public:
    Administrative(string n, int i, string dept) : Employee(n, i), department(dept) {}

    // Override display to show additional details for Administrative
    void display() override {
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

// Derived class for Academic Employee
class Academic : virtual public Employee {
protected:
    string subject;

public:
    Academic(string n, int i, string subj) : Employee(n, i), subject(subj) {}

    // Override display to show additional details for Academic
    void display() override {
        Employee::display();
        cout << "Subject: " << subject << endl;
    }
};

// Derived class for HOD (Head of Department) that inherits both Administrative and Academic
class HOD : public Administrative, public Academic {
public:
    HOD(string n, int i, string dept, string subj) 
        : Employee(n, i), Administrative(n, i, dept), Academic(n, i, subj) {}

    // Override display for HOD
    void display() override {
        Administrative::display();
        Academic::display();
        cout << "Position: Head of Department" << endl;
    }
};

// Main function
int main() {
    // Creating an object of HOD
    HOD hod("Dr. John Doe", 12345, "Computer Science", "Algorithms");

    // Displaying the details of HOD
    hod.display();

    return 0;
}
