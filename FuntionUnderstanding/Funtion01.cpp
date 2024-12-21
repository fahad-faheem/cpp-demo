#include <iostream>
using namespace std;

void funtion (int number);  //formal parameters  declaration of function so compiler know about it 

int main (){



    //  return type fundtion (Parameter) {
    //      funtion body
    //
    //      reuturn 
    // }

    int num = 22;
    int fun = funtion(num):     //actual parameters                 // initialization, Calling function

    cout << fun << endl;





    return 0;
}

void funtion (int number;){                             // definition, what function do?
    cout << "Print " << number << endl;
}


// Actual Parameters are values supplied to the function when 
//it is invoked, whereas Formal Parameters are variables declared 
//by the function that get values when the function is called.
