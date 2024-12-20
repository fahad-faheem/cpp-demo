#include <iostream>
using namespace std;

// Function declaration
void greet(string name);  // Tells the compiler that 'greet' takes a string parameter and returns void  ..  formal parameters

int main() {
    greet("Alice");  // Function call or initialization                 // actual parameters
    return 0;
}

// Function definition (provided later in the code) // function body
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}
