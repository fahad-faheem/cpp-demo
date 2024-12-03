#include <iostream>
using namespace std;

int main() {
    int c = 5;
    cout << "Assignment Operators:" << endl;
    c += 2; // c = c + 2
    cout << "c after c += 2: " << c << endl;
    c -= 1; // c = c - 1
    cout << "c after c -= 1: " << c << endl;
    c *= 3; // c = c * 3
    cout << "c after c *= 3: " << c << endl;
    c /= 2; // c = c / 2
    cout << "c after c /= 2: " << c << endl;
    c %= 3; // c = c % 3
    cout << "c after c %= 3: " << c << endl;
    return 0;
}

// Assignment operators are used to assign values to variables. 
// The basic operator is =, which assigns the value on the right to the variable on the left. 
// Compound assignment operators like += or -= combine 
// arithmetic operations with assignment, allowing you to update a variable's value in a shorthand way
