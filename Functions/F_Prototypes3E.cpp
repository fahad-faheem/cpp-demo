#include <iostream>
using namespace std;

//  prototyping 
// int name (ariables on which function should work)....actual parameter

int name (int, int);

int main (){


    int value1;
    int value2;

    cout << "Enter the first value: " << endl;
    cin >> value1;
    cout << "Enter the second value: " << endl;
    cin >> value2;
    //write formal values inside parantheses and in pattern of name function
    cout << "Now the both values multiplication is " << name(value1, value2) << " using function (name)" << endl;


    return 0;
}

//function declaration
// int function name (variables declartion){Actual function}

int name (int variable1, int variable2){

    int result; 

    result = variable1 * variable2;

    return result;
}