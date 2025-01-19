#include <iostream>

int main() {
    int number, sum = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Please enter a positive number." << std::endl;
        return 1;
    }

    while (number > 0) {
        sum += number % 10; // Add the last digit to the sum
        number /= 10;       // Remove the last digit
    }

    std::cout << "The sum of the digits is: " << sum << std::endl;

    return 0;
}
