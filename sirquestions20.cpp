/*20. Write a class template which sorts and returns the average of values stored in an array.
Implement a well driven program.*/
#include <iostream>
#include <algorithm>
#include <numeric>  // For accumulate
using namespace std;

template <typename T>
class ArrayOperations {
private:
    T* arr;
    int size;

public:
    // Constructor to initialize the array
    ArrayOperations(T* inputArray, int n) : arr(inputArray), size(n) {}

    // Function to sort the array
    void sortArray() {
        sort(arr, arr + size);
    }

    // Function to calculate the average of the array
    T calculateAverage() {
        T sum = accumulate(arr, arr + size, static_cast<T>(0)); // Sum the elements
        return sum / size; // Return the average
    }

    // Function to display the array
    void displayArray() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Example 1: Using integer array
    int arr1[] = {20, 10, 40, 30, 50};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    ArrayOperations<int> intArray(arr1, n1);

    cout << "Original Array (Integers): ";
    intArray.displayArray();

    // Sort and display the sorted array
    intArray.sortArray();
    cout << "Sorted Array (Integers): ";
    intArray.displayArray();

    // Calculate and display the average
    cout << "Average of Integer Array: " << intArray.calculateAverage() << endl;

    // Example 2: Using float array
    float arr2[] = {5.5f, 2.2f, 8.3f, 7.7f, 1.1f};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    ArrayOperations<float> floatArray(arr2, n2);

    cout << "\nOriginal Array (Floats): ";
    floatArray.displayArray();

    // Sort and display the sorted array
    floatArray.sortArray();
    cout << "Sorted Array (Floats): ";
    floatArray.displayArray();

    // Calculate and display the average
    cout << "Average of Float Array: " << floatArray.calculateAverage() << endl;

    return 0;
}
