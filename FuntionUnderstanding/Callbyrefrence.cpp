#include <iostream>
using namespace std;

// Function that modifies the value of the argument (Call by Reference)
void modifyNumber(int &number) {        // formal parameters
    number += 10;
    cout << "Inside the function: " << number << endl;
}

int main() {
    int num = 5;
    cout << "Before calling function: " << num << endl;

    modifyNumber(num);      //actuall parameters

    cout << "After calling function: " << num << endl;
    return 0;
}
