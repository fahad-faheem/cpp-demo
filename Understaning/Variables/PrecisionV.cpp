#include <iostream>
#include <iomanip>

int main() {
    int myInt = 2147483647; // Largest int
    unsigned int myUInt = 4294967295; // Largest unsigned int
    float myFloat = 3.14f; // Approximate value
    double myDouble = 3.141592653589793; // More precise
    long double myLongDouble = 3.141592653589793238462643L; // Even more precise
    char myChar = 'A'; // A single character
    bool myBool = true; // Logical value

    std::cout << "Integer: " << myInt << "\n";
    std::cout << "Unsigned Integer: " << myUInt << "\n";
    std::cout << "Float: " << myFloat << "\n";
    std::cout << "Double: " << myDouble << "\n";
    std::cout << "Long Double: " << std::setprecision(25) << myLongDouble << "\n";
    std::cout << "Character: " << myChar << "\n";
    std::cout << "Boolean: " << myBool << "\n";

    return 0;
}
