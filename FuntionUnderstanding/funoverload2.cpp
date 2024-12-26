#include <iostream>
#include <string>
using namespace std;

    void proccess(int number){
        cout << "Number function" << endl;
    }

    void proccess(string text){
        cout << "Text function" << endl;
    }
    void proccess(string text1, string text2){
        cout << "Two strings" << endl;

    }



int main (){


    int INPUTnumber;
    string INPUTText;

    cout << " Enter the number " << endl;
    cin >> INPUTnumber;
    cout << " Enter Text " << endl;
    cin >> INPUTText;


    proccess (INPUTnumber);     // function overloding
       
 













    return 0;
}

// when the actual parametters sent to formal parametters of function
// and that function will execute which formal parametters sequence matches the actual parrametters despite having same names