#include <iostream>
#include <string>
using namespace std;

int main (){
    const string Email = "youemail@gmail.com"; 
    const long long int UID = 5997276951;
    const int Password = 985985;

    string InputEmail;
    long long int InputUID;
    int InputPassword;

    bool Islogin;

    cout << "Enter your email adress: " << endl;
    cin >> InputEmail;

    if ( InputEmail == Email){
        cout << "Enter you UID: " << endl;
        cin >> InputUID;

        if (InputUID == UID){
            cout << "Enter your password" << endl;
            cin >> InputPassword;

            if (InputPassword == Password){

               cout << "Logged in successfully" << endl; 

            } else {
               cout << "Please enter correct password and try again" << endl;
            }

        } else {
            cout << "Please enter correct UID and try again" << endl;
        }

    } else {
            cout << "Please enter correct email and try again" << endl;
    }

    if (InputEmail == Email && InputUID == UID && InputPassword == Password){
        Islogin = true;
    }   else {
        Islogin = false;
    }

    if (Islogin == true){
        cout << "Welcome back" << endl;
    
    } else if ( Islogin == false) {
        cout << "Press ctrl+alt+n to restart the program" << endl;
    }


    return 0;
}