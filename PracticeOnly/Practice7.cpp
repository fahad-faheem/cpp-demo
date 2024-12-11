#include <iostream>
using namespace std;

int main (){

    // Do-while loop
    // Do-while loops is about do this work while condition is true but if condition becomes false than stop and move on
    // Do {Task} while (Condition)

                                              //note: if you declare this variable under do-while looop block
                                                       // it will not be accesable outside the block

int i = 0;

    cout << "Print values from 0 to 20" << endl;

        do { 
        cout << "Print i " << i << endl;                    // if i declare int i = 0; inside this do {block} it won't be                                                  
        i++;                                               // accesable to while contion parranthese ()
        } while (i <= 20);



    return 0;
}


// why do-while loop ?