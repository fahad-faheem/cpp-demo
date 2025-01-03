#include <iostream>
using namespace std;

int main (){

    int a = 10;       
    int* b = &a;        // pointer variable to store the address of a 


    cout << "Printing Address \n" << endl;
    cout << "The address of a using a is " << &a << endl;     
    cout << "The address of a using b is " << b << endl << endl;

    cout << "Printing Values \n " << endl;
    cout << "The value of a using a is " << a << endl;
    cout << "Thr value of a using b is " << *b << endl << endl;

    cout << "Value modificartion\n" << endl;

    a = 12;
    cout << "To modify the value a using a is a =  new value: "  << a << endl;
    *b = 14;
    cout << "To modify the value a using b is *b =  new value: "  << *b << endl << endl;

    cout << "The address will still be the same: \n" << endl;
    cout << "New and same address printing with a " << &a << endl;
    cout << "New and same address printing with b " << b << endl;




    return 0;
}