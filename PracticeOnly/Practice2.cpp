#include <iostream>
using namespace std;


int main (){

    int Block [] = {23, 34, 45, 56, 76, 754, 67, 87, 54};
    int* Adress = Block;

    // if if have to find the value of block in array we can use following method
    // 1. Block [Block Number]
    // 2. *((Adress) + (The block number))

    // let me prove it by finding value of block 6 using above methods

    cout << "The value of Block 6 is " << Block [6] << endl;        // using Block [Number]
    cout << "The value of Block 6 is " << * (Adress + 6);           // using Adress (Derefrence)

    cout << "\n\n";
   

    // so if we have to find the address of block in array we can use following method 
    // 1. &Block [Block Number]
    // 2. Adress + (The Block number)

    // Let me prove it by finding value of block 5 using above methods
    
    cout << "The Adress of Block 5 is " << &Block [5] << endl;      // using &Block [Block NUmber]
    cout << "The Adress of block 5 is " << Adress + 5 << endl;      // usinh Adress + (The Block number)


    return 0;
}