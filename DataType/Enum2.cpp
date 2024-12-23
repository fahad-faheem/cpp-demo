#include <iostream>
using namespace std;

// Define an enum for days of the week
enum Days {
    Sunday,    // 0
    Monday,    // 1
    Tuesday,   // 2
    Wednesday, // 3
    Thursday,  // 4
    Friday,    // 5
    Saturday   // 6
};

int main() {
    Days today = Wednesday; // Assigning an enum value

    // Display the value
    cout << "The numeric value of today (Wednesday) is: " << today << endl;

    // Check the day
    if (today == Wednesday) {
        cout << "It's midweek!" << endl;
    } else {
        cout << "It's not midweek." << endl;
    }

    return 0;
}



// An enum (short for enumeration) in C++ is a user-defined data type that consists of integral constants.
//  It is used to assign names to a set of related constants, making the code more readable and easier to maintain.