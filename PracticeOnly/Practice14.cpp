#include <iostream> 
using namespace std;

int main (){

    //typecasting

    float realv = 34.99f;
    
    cout << "Now real variable is " << (int)realv << endl;
    cout << "Now both are same but now realv is float " << realv << endl;





    
    int realvv = 34.99;
    
    cout << "Now real variable is " << realvv << endl;
    cout << "Now we cannot write the int value as a float because .99 have been" << endl;
    cout << "removed and the value should be 34.0 which can also be written as " << (float)realvv << endl;

    // now if we write it like this we cannnot achive teh 34.99 value because when program start it terminate 
    // the value after decimal and then again we write it as a float it print 34.0 and then again .0 got discarded 
    // because 0 is 0. lol







    return 0;
}