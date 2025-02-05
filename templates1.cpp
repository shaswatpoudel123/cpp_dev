/*write a generic class stack using template and implement a common push and pup operation in different datatype*/

#include <iostream>

// Template class for Stack
template <typename T>
class Stack {
private:
    static const int MAX = 100; // Maximum size of the stack
    T arr[MAX];
    int top;

public:
    Stack() : top(-1) {} // Constructor initializes top as -1

    // Push operation
    void push(T value) {
        if (top >= MAX - 1) {
            std::cout << "Stack Overflow! Cannot push " << value << "\n";
            return;
        }
        arr[++top] = value;
    }

    // Pop operation
    T pop() {
        if (top < 0) {
            std::cout << "Stack Underflow!\n";
            return T(); // Return default value of T
        }
        return arr[top--];
    }

    // Display Stack
    void display() {
        if (top < 0) {
            std::cout << "Stack is empty!\n";
            return;
        }
        std::cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    // Integer Stack
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();
    std::cout << "Popped: " << intStack.pop() << "\n";
    intStack.display();

    // Double Stack
    Stack<double> doubleStack;
    doubleStack.push(1.5);
    doubleStack.push(2.7);
    doubleStack.display();
    std::cout << "Popped: " << doubleStack.pop() << "\n";
    doubleStack.display();

    // String Stack
    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.display();
    std::cout << "Popped: " << stringStack.pop() << "\n";
    stringStack.display();
    
    return 0;
}
