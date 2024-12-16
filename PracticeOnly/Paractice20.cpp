#include <iostream>
using namespace std;

int subtraction (int number1, int number2, int number3); // you would need to write it exactly as it is during fun declaration

int main (){

    int a, b, c;
    

    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << "Enter third number: " << endl;
    cin >> c;

    int answer = subtraction (a, b, c);        // Here just write the value you want to perform operation on

    cout << "After operation the result of three given value is " << answer << endl;

}

int subtraction (int number1, int number2, int number3) {
int answer;

    answer = number1 - (number2 - number3);

    return answer;
}