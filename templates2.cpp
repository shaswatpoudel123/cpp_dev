/*write a program to swap the numbers using template*/
#include <iostream>

// Template function to swap two numbers
template <typename T>
void swapNumbers(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    double p = 1.5, q = 2.7;
    char c1 = 'A', c2 = 'B';

    std::cout << "Before swapping: x = " << x << ", y = " << y << "\n";
    swapNumbers(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << "\n";

    std::cout << "Before swapping: p = " << p << ", q = " << q << "\n";
    swapNumbers(p, q);
    std::cout << "After swapping: p = " << p << ", q = " << q << "\n";
    
    std::cout << "Before swapping: c1 = " << c1 << ", c2 = " << c2 << "\n";
    swapNumbers(c1, c2);
    std::cout << "After swapping: c1 = " << c1 << ", c2 = " << c2 << "\n";
    
    return 0;
}
