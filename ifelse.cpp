#include <iostream>
using namespace std;

int main (){    

int forTEACUPS;
int forTEAPRICE = 10;
int forTEATOTAL;

cout << "Enter the number of tea cups: ";
cin >> forTEACUPS;

forTEATOTAL = forTEACUPS * forTEAPRICE;

if ( forTEATOTAL > 100) {
forTEATOTAL = forTEATOTAL - (forTEATOTAL * 0.10 );

cout << "The total \" discounted \" price of tea is: " << forTEATOTAL << endl;


} else {
    cout << "The total price of tea is: " << forTEATOTAL << endl;
}


    return 0;
}


