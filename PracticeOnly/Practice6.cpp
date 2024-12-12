#include <iostream>
using namespace std;


int main (){

        //loops
        // performing specific task again and again is called loop
        //Three types of loop in C++
        //For-loop
        //While 
        //Do-while

        // For-loop Explaination

        //structure             for (Declare and intialize varaible; Condition; Increement/Decreement)
        //                              {Perform task untill condition is true but stop when it became false}

        cout << "For loop" << endl;

        // Real structure:

        for (int i = 0; i <= 10; i++){
            cout << "The program will print every number untill the condition become false. number " << i << endl;
        }


    return 0;
}