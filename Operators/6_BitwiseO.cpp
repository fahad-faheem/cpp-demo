#include <iostream>
using namespace std;

int main() {
    int p = 5, q = 3; // Binary: p = 0101, q = 0011
    cout << "Bitwise Operators:" << endl;
    cout << "p & q: " << (p & q) << endl;  // Bitwise AND
    cout << "p | q: " << (p | q) << endl;  // Bitwise OR
    cout << "p ^ q: " << (p ^ q) << endl;  // Bitwise XOR
    cout << "~p: " << (~p) << endl;        // Bitwise NOT
    cout << "p << 1: " << (p << 1) << endl; // Left shift
    cout << "p >> 1: " << (p >> 1) << endl; // Right shift
    return 0;
}


// Bitwise operators operate at the binary level, manipulating the individual bits of numbers. 
// Examples include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), 
// and right shift (>>). These are commonly used in low-level programming, 
// like setting or clearing specific bits in memory