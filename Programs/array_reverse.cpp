#include <iostream>
using namespace std;

int main (){


    int arr [6] = {11, 22, 33, 44, 55, 66};

        cout << "Printing array" << endl << endl;

        for (int i = 0; i < 6; i++){
            cout << arr [i] << endl;
        }


        
        cout << "\n Printing array reversely " << endl << endl;

        for (int i = 5; i >= 0 ; i--){
            cout << arr [i] << endl;
        }




    return 0;
}