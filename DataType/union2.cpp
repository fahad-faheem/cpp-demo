#include <iostream>
#include <cstring> // Include for strcpy
using namespace std;

union Data {
    int i;       // Integer
    float f;     // Float
    char str[20]; // String (character array)
};

int main() {
    // Creating a union variable
    Data data;

    // Assigning value to the integer member
    data.i = 10;
    cout << "data.i: " << data.i << endl;

    // Assigning value to the float member (This will overwrite the value of data.i)
    data.f = 220.5;
    cout << "data.f: " << data.f << endl;

    // Assigning value to the string member (This will overwrite the value of data.f)
    strcpy(data.str, "Hello, Union!");
    cout << "data.str: " << data.str << endl;

    // Note: Only the last assigned member will hold the value correctly
    // Previous values have been overwritten.
    
    return 0;
}

//A union is a special data type that allows you to store different data types
// in the same memory location. The key point is that all members of the 
//union share the same memory space. This means that at any given time, 
// a union can hold only one of its members, but the size of the union
// is equal to the size of its largest member.