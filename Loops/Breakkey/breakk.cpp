#include <iostream>

using namespace std;

int main (){

    cout << "Break the loop when the number reaches 20" << endl;


    for (int i = 0; i < 40; i++){

        cout << i << endl;

        if (i == 20) {
            break; 
        }

    }



    return 0;
}