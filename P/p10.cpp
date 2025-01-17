#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false; // Found a divisor, not prime
    }
    return true; // No divisors found, it's prime
}

int main() {
    int number;

    std::cout << "Enter a positive integer to check if it is prime: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
