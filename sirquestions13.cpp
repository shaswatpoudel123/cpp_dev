/*13. Create a class called Person with data members name, age, address and citizenship_number,
make a constructor to initialize values to data members. Assign citizenship number if the age of
person is greater than 16 otherwise assign value 0 to citizenship number; also create a function to
display the values.*/
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;
    int citizenship_number;

public:
    // Constructor to initialize the data members
    Person(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;

        // Assign citizenship number if age is greater than 16, else assign 0
        if (age > 16) {
            citizenship_number = 123456789;  // Example citizenship number
        } else {
            citizenship_number = 0;  // No citizenship number for age <= 16
        }
    }

    // Function to display the person's details
    void display() const {
        cout << "Person's Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Citizenship Number: " << (citizenship_number == 0 ? "Not Assigned" : to_string(citizenship_number)) << endl;
    }
};

int main() {
    // Create Person objects with different ages
    Person person1("John Doe", 25, "123 Elm St");
    Person person2("Alice Smith", 15, "456 Oak St");

    // Display the information of both persons
    person1.display();
    cout << "---------------------------------" << endl;
    person2.display();

    return 0;
}
