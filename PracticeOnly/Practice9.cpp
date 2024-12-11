#include <iostream>
using namespace std;

int main (){

    // continue keyword
    // for continue keyword we will use if-else statement inside task block{---}
    // we can write it in any loop, here we will use for-loop for it 


    int i = 0;

    do {
       
        cout << "Print " << i << endl;
        i++;
         if(i == 7){
            continue;
        } 
        
    } while (i <= 10);





    return 0;
}