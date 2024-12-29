#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for an array of size 5
    int* arr = new int[5];

    // Initialize the array
    for (int i = 0; i < 5; ++i) {
        arr[i] = (i + 1) * 10; // Implicit dereferencing
    }

    // Print array values using implicit dereferencing (array indexing)
    cout << "Using implicit dereferencing (arr[i]):" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " "; // arr[i] = *(arr + i)
    }
    cout << endl;

    // Print array values using explicit dereferencing
    cout << "Using explicit dereferencing (*(arr + i)):" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(arr + i) << " "; // Explicit dereferencing
    }
    cout << endl;

    // Clean up memory
    delete[] arr;

    return 0;
}
