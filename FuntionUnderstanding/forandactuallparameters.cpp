#include <iostream>
using namespace std;

void function (int formal ){         // formal parameter
    cout << "This is formal parameter value "  << formal + 5 << endl;
}                                      //  Now we only changed formal parameter

int main (){

    int actual = 10;        // actual parameter
    function (actual);      // writing it inside function here is where actual value sent to function .. 
    cout << "This is actual parameter value" << actual << endl;


    return 0;
}

// Actual parameters are values which are passed to functions
// Formal parameters are recivers of actual parameters value, inside function
