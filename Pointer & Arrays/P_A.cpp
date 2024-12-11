#include <iostream>
using namespace std;

int main (){

    // pointer & arrays 

    int Array[] = {12, 34, 56, 67, 88};

    cout << "The value of Array [0] is " << Array [0] << endl;
    cout << "The value of Array [1] is " << Array [1] << endl;
    cout << "The value of Array [2] is " << Array [2] << endl;
    cout << "The value of Array [3] is " << Array [3] << endl;


    // Addresses of arrays 
    int* Address = Array;

    cout << "The Address of Array [0] is " << Array [0] << endl;
    cout << "The Address of Array [1] is " << Array [1] << endl;
    cout << "The Address of Array [2] is " << Array [2] << endl;
    cout << "The Address of Array [3] is " << Array [3] << endl;
    

    // the value of arrays using derefrence operator

    cout << "The value of Array [0] using derefrence operator is " << *Address  << endl;
    cout << "The value of Array [1] using derefrence operator is " << * (Address + 1) << endl;
    cout << "The value of Array [2] using derefrence operator is " << * (Address + 2) << endl;
    cout << "The value of Array [3] using derefrence operator is " << * (Address + 3) << endl;
    
    
    return 0;
}