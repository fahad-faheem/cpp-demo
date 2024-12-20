#include <iostream>
using namespace std;

// Function overload 1: Adds two integers
int add(int a, int b) {
    return a + b;
}

// Function overload 2: Adds three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function overload 3: Concatenates two strings
string add(string a, string b) {
    return a + b;
}

int main() {
    // Calling the overloaded functions
    cout << "Sum of 2 and 3: " << add(2, 3) << endl;           // Calls int add(int, int)
    cout << "Sum of 1, 2, and 3: " << add(1, 2, 3) << endl;     // Calls int add(int, int, int)
    cout << "Concatenation of Hello and World: " << add("Hello ", "World") << endl; // Calls string add(string, string)
    
    return 0;
}
