/*18. Create a class coordinate containing x, y and z private variables. Perform operations for
incrementing, adding and comparing object(s) by overloading ++, += and == operators
respectively. Define necessary functions to set and display the variables.*/
#include <iostream>
using namespace std;

class Coordinate {
private:
    int x, y, z;  // Private data members

public:
    // Constructor to initialize coordinates
    Coordinate(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}

    // Function to set coordinates
    void setCoordinates(int x_val, int y_val, int z_val) {
        x = x_val;
        y = y_val;
        z = z_val;
    }

    // Function to display coordinates
    void display() const {
        cout << "Coordinate: (" << x << ", " << y << ", " << z << ")" << endl;
    }

    // Overload ++ operator (prefix increment) to increment all coordinates by 1
    Coordinate& operator++() {
        ++x;
        ++y;
        ++z;
        return *this;
    }

    // Overload += operator to add another Coordinate object to this one
    Coordinate& operator+=(const Coordinate& other) {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }

    // Overload == operator to compare two Coordinate objects
    bool operator==(const Coordinate& other) const {
        return (x == other.x && y == other.y && z == other.z);
    }
};

int main() {
    // Create two Coordinate objects
    Coordinate c1(1, 2, 3);  // Coordinate (1, 2, 3)
    Coordinate c2(4, 5, 6);  // Coordinate (4, 5, 6)

    // Display initial coordinates
    cout << "Initial coordinates:" << endl;
    c1.display();
    c2.display();

    // Increment coordinates of c1 using ++ operator
    ++c1;  // Increment c1 by 1
    cout << "\nAfter incrementing c1:" << endl;
    c1.display();

    // Add coordinates of c2 to c1 using += operator
    c1 += c2;  // Add c2 to c1
    cout << "\nAfter adding c2 to c1:" << endl;
    c1.display();

    // Compare c1 and c2 using == operator
    if (c1 == c2) {
        cout << "\nc1 and c2 are equal!" << endl;
    } else {
        cout << "\nc1 and c2 are not equal!" << endl;
    }

    return 0;
}
