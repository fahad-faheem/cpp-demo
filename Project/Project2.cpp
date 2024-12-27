#include <iostream>
using namespace std;

// Function to create and return a dynamic array
int* createArray(int size) {
    // Allocate memory dynamically
    int* arr = new int[size];

    // Initialize the array with values (e.g., indices)
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 2; // Example initialization
    }

    // Return the pointer to the array
    return arr;
}

int main() {
    int size = 5;

    // Call the function and get the dynamic array
    int* myArray = createArray(size);

    // Access and print the array values
    cout << "Array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] myArray;

    return 0;
}
