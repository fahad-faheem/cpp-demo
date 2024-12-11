#include <iostream>
#include <string>

using namespace std;


int main () {

int a = 12;
float b = 24.45;
double c = 28.3434;

        // typecasting is like changing or manipulating varible of values for different purposes
        // like changing float to init or changing double to float etc...


    //first method of type casting 

    cout << "First Method of Typecasting" << endl;
    cout << "The real value of float b is " << b << endl;
    cout << "The Typecasted value of float b in \"double\" is " << double(b)  << endl;
    cout << "The Typecated value of float b in \"int\" is " << int(b) << endl;

    cout << "The real value of double c is " << c << endl;
    cout << "The Typecasted value of double c in \"float\" is " << float(c) << endl;
    cout << "The Typecated value of double c in \"int\" is " << int(c) << endl;
    cout << "\n\n";

    //second method fot typecasting

    cout << "Second Method of Typecasting" << endl;
    cout << "The real value of float b is " << b << endl;
    cout << "The Typecasted value of b in \"double\" is " << (double)b << endl;
    cout << "The Typecasted value of b in \"int\" is "<< (int)b << endl;


    cout << "The real value of double c is " << c << endl;
    cout << "The Typecasted value of c in \"float\" is " << (float)c <<endl;
    cout << "The Typecasted value of double c in \"int\" is " << (int)c << endl;


    return 0;
}