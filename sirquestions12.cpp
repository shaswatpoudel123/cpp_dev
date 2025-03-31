/*12. Write a program implementing function template which returns greatest among three numbers.
Pass the arguments as reference variables.*/
#include <iostream>
using namespace std;

// Function template to find the greatest of three numbers
template <typename T>
T findGreatest(T &a, T &b, T &c) {
    // Compare and return the greatest value
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int num1 = 10, num2 = 20, num3 = 15;
    float f1 = 10.5f, f2 = 20.5f, f3 = 15.5f;
    double d1 = 30.75, d2 = 25.5, d3 = 40.2;

    // Find greatest among three integers
    cout << "Greatest among integers: " << findGreatest(num1, num2, num3) << endl;

    // Find greatest among three floats
    cout << "Greatest among floats: " << findGreatest(f1, f2, f3) << endl;

    // Find greatest among three doubles
    cout << "Greatest among doubles: " << findGreatest(d1, d2, d3) << endl;

    return 0;
}
