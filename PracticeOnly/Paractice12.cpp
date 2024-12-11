
#include <iostream>
#include <iostream>

using namespace std;

union use {
    int number;
    char character;
    float decimal;
};

int main (){
                                              
    union use use1; {                                         // for example let's suppose how much bytes it takes in memory
        use1.number = 12;                                       // 4bytes
        use1.character = 'F';                                   // 2bytes                             // 6bytes
        // use1.decimal = 45.00;                                // 4bytes
        
    };                      
        
    cout << "This is number in union is: " << use1.number << endl;              //if we uncomment it in the number three value
    cout << "This is character in union is: " << use1.character << endl;        // it will over write the previous varibles value
    // cout << "This is decimal in union is: " << use1.decimal << endl;         // because there no space is in memory for previous variables
                                                                           




    return 0;
}


         
    // In union it will alocated the highest bytes of space in memory
    // Here it will allocate 6bytes of data 
    // but the condition is that we will be able to use one at the time 
    // if we used more than one the value of latest will printed and the above will be over write 
    // and it will print useless value 
