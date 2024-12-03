#include <iostream>
using namespace std;

int main() {
    bool isStudent;
    int input;

    cout << "Are you a student? Enter 1 for Yes or 0 for No: ";
    cin >> input;

    // Assign the value based on input (1 -> true, 0 -> false)
    if (input == 1) {
        isStudent = true;
    } else if (input == 0) {
        isStudent = false;
    } else {
        cout << "Invalid input! Please enter 1 or 0." << endl;
        return 1; // Exit the program for invalid input
    }

    // Use the boolean variable in an if-else statement
    if (isStudent) { 
        cout << "Welcome, student! You are eligible for a discount." << endl;
    } else {
        cout << "Hello! You are not a student, but we still have great deals for you." << endl;
    }

    return 0;
}
