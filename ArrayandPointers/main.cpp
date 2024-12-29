#include <iostream>
#include <string>
using namespace std;

void funn(int firstnum, int secondnum, string operator){

    if (operator == "+"){
        cout << "The sum is " << firstnum + secondnum << endl;
    } else if (operator == "-"){
        cout << "The subtraction is " << firstnum - secondnum << endl;
    } else if (operator == "*"){
        cout << "The multipilication is " << firstnum * secondnum << endl;
    } else if (operator == "/"){
        cout << "The subtraction is " << firstnum / secondnum << endl;
    } else if (operator == "%"){
        cout << "The reminder is " << firstnum % secondnum << endl;
    } else {
        cout << "Please enter the correct operator andrestart (CTRL+ALT+N)"
    }


}

int main (){

    int firstnum;
    int secondnum;
    string operator;

    cout << "Enter first number: " << endl;
    cin >> firstnum;
    cout << "Enter second number: " << endl;
    cin >> secondnum;
    cout << "Enter the operator (+ - * / %): " << endl;
    cin >> operator;

    void answer = fun(firstnum, secondnum, operator);


    return 0;
}