#include <iostream>
using namespace std;

int fun(int, int);

int main (){


    int number1;
    int number2;

    cout << "Enter first number: " << endl;
    cin >> number1;
    cout << "Enter first number: " << endl;
    cin >> number2;

    int callfun = fun(number1, number2);

    cout << "The multplication of number1 and number2 is " << callfun << endl;




    return 0;
}

int fun(int a, int b){
    int c;

    c = a * b;


    return c;
} 