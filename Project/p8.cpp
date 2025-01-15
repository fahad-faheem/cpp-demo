#include <iostream>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: 0! and 1! are 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;

    std::cout << "Enter a positive integer to calculate its factorial: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long result = factorial(number);
        std::cout << "The factorial of " << number << " is " << result << "." << std::endl;
    }

    return 0;
}
