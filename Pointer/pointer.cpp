#include <iostream>

using namespace std;

int main (){

    //pointer store the address of variable 
    // & ---> address of operators 
    // * ---> value of derefrence operator

    int a = 4;
    int* b = &a;
    int** c = &b;

    cout << "The value of variable a is " << a << endl;
    cout << "The address of variable a is " << &a << endl;
    cout << "We can also write it like this below" << endl;
    cout << "The address of variable a is " << b << endl;

    // So now, only if you print only b it will print the address of a. because b = &a 
    // but 
    // if you print *b it will print value the value of a. because *b = the value of assigned variable

    cout << "The value of variable b is " << *b << endl;
    cout << "The address of variable b is " << &b << endl;
    cout << "We can also write it like this below" << endl;
    cout << "The address of variable b is " << c << endl;


    return 0;

}