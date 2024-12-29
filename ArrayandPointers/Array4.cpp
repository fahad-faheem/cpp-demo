#include <iostream>
using namespace std;

int main() {
    // Allocate memory for an array
    int* arr = new int[3];
    arr[0] = 10; // Assign values to the array
    arr[1] = 20;
    arr[2] = 30;

    // Print values using the pointer and addresses
    cout << "Address of arr[0]: " << arr << endl;          // Prints address of the first block
    cout << "Value at arr[0]: " << *arr << endl;          // Dereference to get the value at arr[0]

    cout << "Address of arr[1]: " << (arr + 1) << endl;   // Address of the second block
    cout << "Value at arr[1]: " << *(arr + 1) << endl;    // Dereference to get value at arr[1]

    cout << "Address of arr[2]: " << (arr + 2) << endl;   // Address of the third block
    cout << "Value at arr[2]: " << *(arr + 2) << endl;    // Dereference to get value at arr[2]

    // Clean up memory
    delete[] arr;

    return 0;
}
