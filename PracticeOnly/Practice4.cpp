#include <iostream>
using namespace std;

int main (){

    int Block [] = {23, 34, 56, 67, 78, 89, 77};
    int* Value = Block;

    // writing all values in array one by on using for loop with first method: Block [Block number]

    for (int i = 0; i < 7; i++){
        cout << "The value of Block " << i << Block [i] << endl;      // Block [Block Nunber] 
    }

    cout << "\n\n"

    // writing all values in array one by one using for loop with second method: *(Adress) + (Block number)

    for (int j = 0; j < 7; j++){
        cout << "The value of Block " << j << *(Value + j) << endl;     // * ((Pointer Variable) + (Block Number))
    }




    return 0;
}