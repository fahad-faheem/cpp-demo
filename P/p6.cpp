#include <iostream>  // Include input-output stream library

using namespace std;

int main() {
    // Declare variables
    int num1, num2;
    int sum;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform addition
    sum = num1 + num2;

    // Output the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;

    return 0; // Indicate that the program ended successfully
}
