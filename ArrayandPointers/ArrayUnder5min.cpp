#include <iostream>
using namespace std;

int fun (int value[], int size){
    int total = 0;
    int number = 1;
    for (int i = 0; i < size; i++){
        cout << "The value at " << number << " and index " << i << " is " << value[i] << endl;
        number++;
        total = total + value[i];
    }

    return total;
}

int main (){

    int arr [] = {23, 45, 56, 67, 78};
    
    int function = fun (arr, 5);

    cout << function << endl;
    




    return 0;
}