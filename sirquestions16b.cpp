/*16. Write a program to implement vector addition using operator overloading
(a)Using Friend Function
(b) Without using Friend Function*/
#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    // Constructor to initialize vector components
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload + operator using a member function
    Vector operator+(const Vector& v) {
        return Vector(x + v.x, y + v.y); // Add corresponding components
    }

    // Function to display the vector
    void display() const {
        cout << "Vector: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Create two vectors
    Vector v1(2, 3);  // Vector (2, 3)
    Vector v2(4, 5);  // Vector (4, 5)

    // Add the vectors using the overloaded + operator
    Vector result = v1 + v2;

    // Display the result of addition
    cout << "Result of vector addition: ";
    result.display();

    return 0;
}
