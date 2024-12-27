#include <iostream>
using namespace std;

int fun (int value[], int size){     // value to know the value and size to know the limits  // formal parameters to recieve actual parameters

    int total = 0;                  // total variable to hold the total value and intialized outside of loop to avoid redeclaration 
    int number = 1;                // number variable to start the number with 1 < size 

    for (int i = 0; i < size; i++){     // size to give condition to print until size limit exceed 
        cout << "value at " << number << " is " << value [i] <<  endl; // number to show the index without 0 and vslue to show the vlue
        total = total + value[i];       // update total value everytime 
        number++;                       // update the number everytime for index 
    }



    return total;                       // return needed is total 

}

    int main (){
    int arr [] = {23, 45, 56, 67};      // declare and define array

    int callfun = fun (arr, 4);     // store the function and return inside callfun variable and now we can use it as much we want // sent actual parameters to fun

    


    cout << callfun << endl;      // print funtion using variable to avoid Re-computing and save computer and CPU resources 




    return 0;
}