// for loop is used to iterate a block of code a certain number of times.
//infinite loop be catious

#include <iostream>
using namespace std;

int main (){

int money = 1;
string answer; 

cout << "What you want, infinite loop or from 1 to 98?" << endl;
getline(cin, answer);

if (answer == "infinite"){      

        cout << "A moment before disaster" << endl;
        for (int i = 1; 1 < 2; i++){
        cout << "Counting " << i << endl;

    }
}

else if (answer == "from 1 to 98"){

        cout << "Kiddo, you are a good person" << endl;
        for (int i = 1; i <= 98; i++){
        cout << "Counting " << i << endl;

    }
                

    }   else    {
   
    cout << "Invalid choice, try again." << endl;
   
            }

return 0; 

}
