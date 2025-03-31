/*15. Implement a Complex class that represents complex numbers. Overload the + and - operator
to add and subtract two complex numbers.*/
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor to initialize complex number
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    // Overload + operator to add two complex numbers
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    // Overload - operator to subtract two complex numbers
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    // Function to display complex number in a + bi format
    void display() const {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(3, 4);  // 3 + 4i
    Complex c2(1, 2);  // 1 + 2i

    // Add the complex numbers
    Complex sum = c1 + c2;
    cout << "Sum: ";
    sum.display();

    // Subtract the complex numbers
    Complex diff = c1 - c2;
    cout << "Difference: ";
    diff.display();

    return 0;
}
