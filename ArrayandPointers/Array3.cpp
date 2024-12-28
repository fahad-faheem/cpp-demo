#include <iostream>
using namespace std;


void print (int value[], int size){\

    int total; // total variable to store the total value 
    int num = 1;

    for (int i = 0; i < size; i++){
        cout << "The value at index " << i << " and number " << num << " is " << value[i] << endl;
        total = total + value[i];
        num++;
    }

    cout << "Total value is " << total << endl;


}

int main (){


    //pointer 

    int arr [] = {23, 45, 56, 67, 32, 45, 56, 67, 67, 83, 39, 88};

    print (arr, 12);






    return 0;
}