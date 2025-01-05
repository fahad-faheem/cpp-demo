#include <iostream>
using namespace std;

class MyClass {
private:
    int* ptr;

public:
    // Constructor
    MyClass(int val) {
        ptr = new int; // Dynamically allocate memory
        *ptr = val;
        cout << "Constructor called, value = " << *ptr << endl;
    }

    // Destructor
    ~MyClass() {
        delete ptr; // Free the dynamically allocated memory
        cout << "Destructor called, memory released." << endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj(42);

    // Destructor is automatically called when the object goes out of scope
    return 0;
}
