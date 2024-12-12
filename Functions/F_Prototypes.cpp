#include <iostream>
using namespace std;

int sum(int, int);

int main (){


    int number1;
    int number2;

    cout << "Hmm I know you're stuck with some addition, right?" << endl;
    cout << "Okay, Enter first number:" << endl;
    cin >> number1;
    cout << "Enter second one:" << endl;
    cin >> number2;

    cout << sum(number1, number2);




    return 0;
}

int sum (int a, int b){
    int c;
    c = a + b;
    return c;

}