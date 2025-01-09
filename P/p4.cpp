#include <iostream>
using namespace std;


int main (){

    int size;
    int* arr = new int[size];

    cout << "Enter the size of array: " << endl;
    cin >> size;

    cout << "Enter " << size << " Elements: " << endl;
    for (int i = 0; i < size; i++){
        cin >> arr [i];
    }

    cout << "Your enter: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\nThanks for using my program" << endl;

    return 0;
}