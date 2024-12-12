#include <iostream>
using namespace std;
#include <iomanip>

int sum(int a, int b){
    int c;
    c = a + b;
    return c;

}
int main (){

    int number1;
    int number2;

   

    cout << "I heard, You want to add two numbers togather?" << endl;
    cout << "Please enter first number: " << endl;
    cin >> number1;
    cout << "Now enter second number" << endl;
    cin >> number2;

    cout << "Here we go! This is the results" << endl;
    cout << sum(number1, number2);



    return 0;
}


// Actual parameters are values which are passed to functions
// Formal parameters are recivers of actual parameters value, inside function