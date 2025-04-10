/*21. Create a base class Person with private members name and age, and public methods to set and
get these members. Create a derived class Student and use the public methods of Person to access
its private members.*/
#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize Person object
    Person(string n = "", int a = 0) : name(n), age(a) {}

    // Setter methods
    void setName(const string& n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Getter methods
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

// Derived class Student
class Student : public Person {
private:
    int rollNumber;

public:
    // Constructor to initialize Student object
    Student(string name, int age, int roll) : Person(name, age), rollNumber(roll) {}

    // Setter method for roll number
    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    // Getter method for roll number
    int getRollNumber() const {
        return rollNumber;
    }

    // Display all information of Student
    void displayStudentInfo() {
        cout << "Student Information:" << endl;
        cout << "Name: " << getName() << endl;  // Accessing Person's method
        cout << "Age: " << getAge() << endl;   // Accessing Person's method
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    // Create a Student object and initialize it
    Student student1("John Doe", 20, 101);

    // Display student information
    student1.displayStudentInfo();

    // Update and display again
    student1.setName("Jane Smith");
    student1.setAge(22);
    student1.setRollNumber(102);

    cout << "\nUpdated Student Information:" << endl;
    student1.displayStudentInfo();

    return 0;
}
