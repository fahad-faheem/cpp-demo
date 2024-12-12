#include <iostream>
using namespace std;

int main (){

    int Block [] = {23, 34, 45, 65, 54, 34, 78, 89, 76};
    int* Adress = Block;

    // figuring out adress of all block one by one using &Block [Block number]

    for (int i = 0; i < 9; i++){
        cout << "The Adress of Block " << i << &Block [i] << endl;
    }

    cout << "\n\n";

    // figuring out adress of all block one by one using &Block [Block number]

     for (int j = 0; j < 9; j++){
        cout << "The Adress of Block " << j << Adress + (j) << endl;
    }



    return 0;
}