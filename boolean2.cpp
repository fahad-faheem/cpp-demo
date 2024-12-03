#include <iostream>
#include <string>
using namespace std;
// yes
int main() {   
    bool isSunny; // Declare a boolean variable
    string userResponse;

    cout << "Is it sunny outside? (yes/no): ";
    cin >> userResponse;

    // Set the boolean variable based on user input
    if (userResponse == "yes") {
        isSunny = true;
    } else {
        isSunny = false;
    }

    // Use the boolean variable in a conditional statement
    if (isSunny) { 
        cout << "It's sunny outside! Wear sunglasses." << endl;
    } else {
        cout << "It's not sunny. No need for sunglasses." << endl;
    }

    return 0;
}
