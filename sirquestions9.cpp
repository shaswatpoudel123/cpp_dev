/*9. Write a program which returns the greatest value of an array. Display an appropriate message
implementing exception handling to check whether array size is out of bound or contains any
negative values. The array must contain only positive numbers.*/
#include <iostream>
using namespace std;

// Custom exception class for invalid input (negative number or out of bound)
class InvalidArrayException {
public:
    const char* what() const {
        return "Array size is out of bounds or contains negative values.";
    }
};

// Function to find the greatest value in an array
int findGreatestValue(int arr[], int size) {
    // Check if the array is empty or size is invalid
    if (size <= 0) {
        throw InvalidArrayException();  // Throw exception if size is non-positive
    }

    int greatest = arr[0];

    // Check if all values are positive
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            throw InvalidArrayException();  // Throw exception if a negative number is found
        }

        // Find the greatest value
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }
    return greatest;
}

int main() {
    try {
        int n;

        // Input the size of the array
        cout << "Enter the size of the array: ";
        cin >> n;

        // Check if the size is positive
        if (n <= 0) {
            throw InvalidArrayException();  // If array size is non-positive, throw exception
        }

        // Declare a regular array of fixed size (for simplicity, assuming a maximum size)
        int arr[n];

        // Input elements of the array
        cout << "Enter " << n << " positive numbers: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            // Check if the entered number is negative
            if (arr[i] < 0) {
                throw InvalidArrayException();  // Throw exception if a negative number is found
            }
        }

        // Call the function to find the greatest value in the array
        int greatest = findGreatestValue(arr, n);
        cout << "The greatest value in the array is: " << greatest << endl;

    } catch (const InvalidArrayException& e) {
        // Catch exceptions for invalid array size or negative values
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
