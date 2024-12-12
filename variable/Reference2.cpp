#include <iostream>
using namespace std;

int main (){


    int realnumber = 36;
    int & refrencenumber = realnumber;

    cout << "Now when we want to write the refrence of real number we should just write " << refrencenumber << endl;


    // key point 

    //if you change the value of a through b, 
    //a's value will be updated. Any future use of a will reflect this new value.
    // it both refer to same memory address changing one will change another 

    // Example 
    
    refrencenumber = 50;

    cout << "Now the realnumber value is " << realnumber << endl;                       //output = 50
    cout << "And also the refrence number value is now " << refrencenumber << endl;     // output = 50




    return 0;
}


    // 1. A reference must always be initialized when declared.
    // 2. Once a reference is assigned to a variable, it cannot be changed to refer to another variable.
    // 3. References are often used for parameter passing to functions when you want to
    // modify the argument directly or avoid copying large objects.