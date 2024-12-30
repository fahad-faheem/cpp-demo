#include <iostream>
using namespace std;

int main (){

    int x = 10;                     // x is a variable 
    int* ptr = &x;                 // int* is a data type to store the address of x and & is to give address to ptr 


    // Accessing value and address manually 

    cout << "THe value of x is " << x << endl;
    cout << "The address of x is " << &x << endl;

    // Accesing value and address with pointer

    cout << "The value of x using pointer is " << *ptr << endl;
    cout << "The address of x using pointer is " << ptr << endl;


    // Whe can change the value of x using pointer


    *ptr = 20;

    cout << "The updated value of x with pointer is " << *ptr << endl;
    cout << "The updated value of x using original variable is " << x << endl;

    // the address will always be the same 
    // we use pointers for addresses of variable and sometimes to change the value at the address 
    // which we cannot do with &x, we can change the x value implicitly with pointer

    return 0;
}







