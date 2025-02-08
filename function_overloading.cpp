#include <iostream>
using namespace std;

class Example {
public:
    void show(int a) {  // Function 1
        cout << "Integer: " << a << endl;
    }

    void show(double b) {  // Function 2
        cout << "Double: " << b << endl;
    }

    void show(string s) {  // Function 3
        cout << "String: " << s << endl;
    }
};

int main() {
    Example obj;
    obj.show(10);       // Calls show(int)
    obj.show(3.14);     // Calls show(double)
    obj.show("Hello");  // Calls show(string)

    return 0;
}
