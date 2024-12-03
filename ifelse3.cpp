#include <iostream>
#include <string>

using namespace std;

int main (){
    string Question;
    int Number;

    cout << "Hello, How are you?" << endl; 
    getline(cin, Question);

    if (Question == "Good" || Question == "Fine" || Question == "Not Bad") {
        cout << "I'm glad to hear that" << endl;
    } else {
        cout << "I don't care about that, let's move on." << endl;

    }
    cout << "Okay tell me any one number you want from 1 to 10" << endl;
    cin >> Number; 

    if (Number == 1 ) {
        cout << "You look lucky but you unluckiest alive!! lol" << endl;
    } else if (Number == 2) {
        cout << "You're gentle and kind" << endl;
    } else if (Number == 3) {
        cout << "  You are the painter fan" << endl;
    } else if (Number == 4) {
        cout << "Please do not waste oxygen, please!" << endl;
    } else if (Number == 5) {
        cout << "Hmmm, you're a bit of a foodie" << endl;
    } else if (Number == 6) {
        cout << "You, you? boring! smile sometimes" << endl;
    } else if (Number == 7) {
        cout << "Ohh PLease work ideas are not enough!" << endl;
    } else if (Number == 8) {
        cout << "Alive But dead inside" << endl;
    } else if (Number == 9) {
        cout << "Sleep, wake up, sleep, wake up" << endl;
    } else if (Number == 10) {
        cout << "You're really good hearted" << endl;
    }
    else {
        cout << "Please go to home your mom is looking for you!" << endl;
    }
    return 0;
}   