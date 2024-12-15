#include <iostream>
#include <string>
using namespace std;


int function (int a, int b, int c){

    int result = a + b + c;
    return result;
}

int main (){

    int number1;
    int number2;
    int number3;
    string answer;
   

    cout << "We will need three numbers and we will do operation on it" << endl;
    cout << "If result are less than 100 you'll get 1000$ in greater you'll get nothing" << endl;
    cout << "Now you're agree or not? (yes/no)" << endl;
    cin >> answer;

        if (answer == "yes"){

        cout << "Enter first number: " << endl;
        cin >> number1;
        cout << "Enter second number: " << endl;
        cin >> number2;
        cout << "Enter third number: " << endl;
        cin >> number3;
        

         int result = function (number1, number2, number3); // we would write function after getting input not before input 
        cout << "Your result is " << result << endl;        // also we can store function inside variable and whenever
                                                        


            if (result <= 100) {                                   // whenever we write variable the function will execute
                cout << "Congrulations! You won 1000$" << endl;
            } else {
                cout << "Sorry, try next time" << endl; 
            }

    } else {
    cout << "no worries we will find someone else. Thank you!" << endl;
                   
}




    return 0;
}
