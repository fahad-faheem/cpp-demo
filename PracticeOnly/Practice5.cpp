#include <iostream>
using namespace std;

int main (){

    // we can declare array to store large about of data of same data type 
    // we can declare it like 
    // (Data type Variable) (Identifier) [About of data we want to store (optional)] = {Data1, Data2, Data3, Data4, Data5 etc};
    // It kind of divide a portion of memory into block and each block have its number we can call it with which is called index.

    int Name [] = {12, 23, 34, 45, 56, 67, 78};
                // 0   1   2   3   4   5   6


    cout << "Now if we want specific data from specific block we can call it " << endl;
    cout << "For Example: if we want 67 here we can manage it like" << endl;
    cout << "Name of identifier & [Block Number], That's is..." << endl;
    cout << "67 = " << Name [5] << endl;




    return 0;
}