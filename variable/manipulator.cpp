#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int a = 03;
    int b = 1234;
    int c = 242434;

   
     // simple data showing format 

    cout << "The value of a is equal to: " << a << endl;
    cout << "The value of a is equal to: " << b << endl;
    cout << "The value of a is equal to: " << c << endl;

     // manipulated data showing format 

    cout << "The value of a is equal to: " << setw(4) << a << endl;
    cout << "The value of a is equal to: " << setw(5) << b << endl;
    cout << "The value of a is equal to: " << setw(6) << c << endl;

   

    // setw justify placement of content on right hand side R.H.S 
    // setw will place the data where you want from right side justification 


    return 0;
}