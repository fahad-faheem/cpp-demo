#include <iostream>

using namespace std;

int main (){

    cout << "Take break between 10 and 20 and then continue until 100 comes." << endl;

    for (int i = 0; i <= 100; i++){
    

       if (i > 10 && i < 20){
        continue;
        }

    cout << i << endl;
    
     
    }

    return 0;
}