#include <iostream>
using namespace std;

// small program 

int main (){

    int startnumber;
    int lastnumber;

    cout << "Hi, The number must be less than 1000" << endl;
    cout << "Enter starting number: " << endl;
    cin >> startnumber;
    cout << "Enter last number: " << endl;
    cin >> lastnumber;

    if (startnumber <= 1000 && lastnumber <= 1000 && startnumber < lastnumber) {

        do {
            cout << startnumber << endl;
            startnumber++;
        } while (startnumber <= lastnumber);


    } else if (startnumber > 1000 || lastnumber > 1000) {
        cout << "Please enter numbers less than 1000 and try again" << endl;

    } else if (startnumber < 0 && lastnumber < 0){
        cout << "Please enter possitive number and try again" << endl;

    } else if (startnumber > lastnumber){
        cout << "The starting number must be less than last number" << endl;

    } else {
        cout << "Unexpected error occured, Please try again later" << endl;
    }
        


    return 0;
}