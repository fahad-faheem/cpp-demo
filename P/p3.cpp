#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* array = new int[size];

    // Populate the array at runtime
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    // Display the array elements
    cout << "You entered: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] array;

    return 0;
}
