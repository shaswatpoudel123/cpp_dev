/*Design a class Student with the following data members to store information:
Name
Roll No
Program
Study Year
Email address
Write a class in the program with appropriate member functions that asks a user to enter sample
data, and then display it on the screen.*/
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string program;
    int studyYear;
    string email;

public:
    // Member function to input data
    void inputData() {
        cout << "Enter Student Name: ";
        getline(cin, name);  // Allows spaces in name

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();  // To ignore the newline character left by cin

        cout << "Enter Program: ";
        getline(cin, program);  // Allows spaces in program name

        cout << "Enter Study Year: ";
        cin >> studyYear;

        cin.ignore();  // To ignore the newline character left by cin

        cout << "Enter Email Address: ";
        getline(cin, email);  // Allows spaces in email
    }

    // Member function to display data
    void displayData() const {
        cout << "\nStudent Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Program: " << program << endl;
        cout << "Study Year: " << studyYear << endl;
        cout << "Email Address: " << email << endl;
    }
};

int main() {
    // Create an object of the Student class
    Student student;

    // Ask the user to input the data
    student.inputData();

    // Display the student information
    student.displayData();

    return 0;
}
