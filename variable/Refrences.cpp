#include <iostream>
#include <string>

using namespace std;


int main (){

int a = 45;
int & y = a;

    // for refrences you can use variable & the (init for your refrence) = the value of variable you want to refrence
    // variable & init = real variable identifier 

    cout << "The real value of a is " << a << endl;
    cout << "The refrence value of a, y is equal to " << y << endl;

    return 0;

}