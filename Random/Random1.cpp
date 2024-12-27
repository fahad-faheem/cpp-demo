#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    int onemonthdata[30]; // Declare an array with 30 elements

    // Seed the random number generator
    srand(time(0));

    // Fill the array with random numbers under 100
    for (int i = 0; i < 30; ++i) {
        onemonthdata[i] = rand() % 100; // Random number between 0 and 99
    }

    // Print the array values
    cout << "Random numbers for one month data:" << endl;
    for (int i = 0; i < 30; ++i) {
        cout << onemonthdata[i] << " ";
    }
    cout << endl;

    return 0;
}
