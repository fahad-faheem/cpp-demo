#include <iostream>
using namespace std;

void function (int &number){             // the value recieve in number formal parameter is call by refrence
      
   cout << "The formal value is "  << number + 5<< endl;                // now it will change the actual value too 
}                                                                      

int main (){

    int a = 20;


    function(a);                                    // the value sent to function 
    cout << "The real value is " << a << endl;
    cout << "The real value is " << a << endl;



    return 0;
}