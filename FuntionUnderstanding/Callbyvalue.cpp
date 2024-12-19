#include <iostream>
using namespace std;

void function (int number){             // the value recieve in number formal parameter is call by value 
    // it will not change the whole variable value instead it will change it for the function only 
    // 
    cout << "The value is with number + 8 is " << number + 8 << endl;    // Declarition and Definition 
}                                                                       // of funtion 

int main (){

    int a = 20;


    function(a);                                    // the value sent to function 
    cout << "The real value is " << a << endl;



    return 0;
}