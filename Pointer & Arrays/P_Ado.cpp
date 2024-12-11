#include <iostream>
using namespace std;

int main (){

    int Array [] = {12, 23, 34, 45, 56, 34, 64, 45, 56, 78, 99, 98, 67, 65, 54, 43, 32};
    int* Adress = Array;
    int number = 0;


    do {
        cout << "The value of Array " << number << " is " << Array [number] << endl;
        number++;

    } while (number < 16);


    return 0;
}