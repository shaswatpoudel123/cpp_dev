/*6. Write a program to take distance in feet & inches; then subtract two distances passing objects as
arguments.*/

#include <iostream>
using namespace std;

// Class to represent a distance in feet and inches
class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor to initialize feet and inches
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {
        // If inches is more than 12, convert to feet
        if (inches >= 12) {
            feet += inches / 12;  // Convert excess inches to feet
            inches = inches % 12; // Remainder inches
        }
    }

    // Function to display the distance
    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Function to subtract another distance from the current one
    void subtract(Distance d) {
        // Subtract inches first
        inches -= d.inches;
        if (inches < 0) {
            inches += 12;  // Borrow 12 inches from feet
            feet -= 1;     // Reduce one foot
        }

        // Subtract feet
        feet -= d.feet;

        // If feet become negative, set to 0 (since distance can't be negative)
        if (feet < 0) {
            feet = 0;
            inches = 0;
        }
    }
};

// Main function
int main() {
    int feet1, inches1, feet2, inches2;

    // Take input for the first distance
    cout << "Enter first distance (feet inches): ";
    cin >> feet1 >> inches1;

    // Take input for the second distance
    cout << "Enter second distance (feet inches): ";
    cin >> feet2 >> inches2;

    // Create Distance objects
    Distance d1(feet1, inches1);
    Distance d2(feet2, inches2);

    // Display the original distances
    cout << "First distance: ";
    d1.display();
    cout << "Second distance: ";
    d2.display();

    // Subtract d2 from d1
    d1.subtract(d2);

    // Display the result after subtraction
    cout << "Result after subtraction: ";
    d1.display();

    return 0;
}
