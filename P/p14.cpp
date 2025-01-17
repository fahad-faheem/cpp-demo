#include <iostream>
#include <vector>

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive number of elements." << std::endl;
        return 1;
    }

    std::vector<int> numbers(n);
    std::cout << "Enter " << n << " integers:" << std::endl;

    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int largest = numbers[0];
    for (int i = 1; i < n; ++i) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}
