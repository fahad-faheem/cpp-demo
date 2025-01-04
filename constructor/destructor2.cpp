#include <iostream>
using namespace std;

class MyClass {
public:
    int* ptr;  // Pointer to dynamically allocated memory

    // Parameterized constructor
    MyClass(int size) {
        ptr = new int[size];  // Dynamically allocating memory
        cout << "Memory allocated for " << size << " integers." << endl;
    }

    // Destructor
    ~MyClass() {
        delete[] ptr;  // Releasing the dynamically allocated memory
        cout << "Memory freed." << endl;
    }
};

int main() {
    {
        MyClass obj(5);  // Creating an object with dynamic memory allocation
        // Destructor will be called automatically at the end of this scope
    }

    // At this point, obj goes out of scope and the destructor is automatically called

    return 0;
}
