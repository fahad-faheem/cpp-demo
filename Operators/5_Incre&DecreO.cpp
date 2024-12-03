#include <iostream>
using namespace std;

int main() {
    int r = 5;
    cout << "Increment and Decrement Operators:" << endl;
    cout << "r++: " << r++ << " (post-increment)" << endl;
    cout << "r after post-increment: " << r << endl;
    cout << "++r: " << ++r << " (pre-increment)" << endl;
    cout << "r--: " << r-- << " (post-decrement)" << endl;
    cout << "r after post-decrement: " << r << endl;
    cout << "--r: " << --r << " (pre-decrement)" << endl;
    return 0;
}

// Increment and Decrement Operators
// Increment and decrement operators are shorthand operators used to increase or decrease the value of a variable by 1. 
// The increment operator (++) adds 1 to a variable, and the decrement operator (--) subtracts 1. 
// They can be used in two ways: prefix (where the change happens before use) or postfix (where the change happens after use).