#include <iostream>
#include <string>
using namespace std;

int main (){
    string Email = "youemail@gmail.com"; 
    long long int UID = 5997276951;
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

        if (InputUID = UID){
            cout << "Enter your password" << endl;

            if (InputPassword = Password){

               cout << "Logged in successfully" << endl; 
                Islogin = true;
            } else {
                cout << "Login attempt unsuccessful due to wrong Password" << endl;
        }
        } else {
        cout << "\"Login\" attempt unsuccessful due to wrong UID" << endl;
    }
    } else {
        cout << "\"Login\" attempt unsuccessful due to wrong email address" << endl;
    }

    if (InputEmail == Email && InputUID == UID && InputPassword == Password){
        Islogin = true;
    } else {
        Islogin = false;
    }

    if (Islogin = true){
        cout << "This is your home page" << endl;
    } else {
        cout << "Please enter valid details and try again " << endl;
    }
    return 0;
}