#include <iostream>
#include <string>
using namespace std;

int main() {
    int code;
    string name;
    int age;
    string message;  // Corrected spelling from 'messege' to 'message'

    cout << "Set 6-digit code: ";
    cin >> code;

    // Check if the code is valid
    if (code >= 100000 && code <= 999999) {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your age: ";
        cin >> age;

        // Check if the age is valid
        if (age > 0 && age <= 100) {
            cout << "Enter your message: ";
            cin.ignore();  // To clear the newline left in the buffer after age input
            getline(cin, message);  // Use getline for inputting full messages with spaces

            cout << "Enter your code to view details: ";
            int enteredCode;
            cin >> enteredCode;

            // Check if the entered code matches
            if (enteredCode == code) {
                cout << "Name: " << name << endl;
                cout << "Age: " << age << endl;
                cout << "Message: " << message << endl;
            } else {
                cout << "Incorrect code" << endl;
            }
        } else {
            cout << "Please enter a valid age (1-100)." << endl;
        }
    } else {
        cout << "Please enter a valid 6-digit code." << endl;
    }

    return 0;
}
