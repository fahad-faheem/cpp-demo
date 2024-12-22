#include <iostream>
#include <string>


using namespace std;

int main (){

    int Inputnumbers;
    string Inputwords;

    string CPP = "This is C++";
    string variables = "Variable Explanation";
    string datatypes = "Dataypes Explanation";
    string functions = "Function Explanation";
    string arrays = "Arrays Explanation";
    string pointers = "Pointers Explanation";
    string general = "Gereral Knowledge";
   
    // what is primary expression
    // arguments 
    // difference between == and =
    //missing template arguments before '<<' token
//    42 |         cout << function << endl;

    
    cout << "Welcome!" << endl;
    cout << "1. CPP\n2. variables\n3. datatypes\n4. functions\n5. arrays\n6. pointers\n7. general" << endl;
    cout << "Please enter the concept name you want to learn from above" << endl;
    cin >> Inputwords;


        // if (cin = int ){                // cin == int
        // cin >> Inputnumbers;
        // } else if (cin = string) {       // cin == string
        //     cin >> Inputwords;
        // }


    if (Inputwords == "CPP" || Inputnumbers == 1){
        cout << CPP << endl;
    } else if (Inputwords == "variable" || Inputnumbers == 2){
        cout << variables << endl;
    } else if (Inputwords == "datatypes" || Inputnumbers == 3){
        cout << datatypes << endl;
    } else if (Inputwords == "function" || Inputnumbers == 4){
        cout << functions << endl;
    } else if (Inputwords == "arrays" || Inputnumbers == 5){
        cout << arrays << endl;
    } else if (Inputwords == "pointers" || Inputnumbers == 6){
        cout << pointers << endl;
    } else if (Inputwords == "general" || Inputnumbers == 7){
        cout << general << endl;
    } else {
     cout << "Enter the concept name correctly, restart the program (ctrl+alt+n)" << endl;
    }
    // }   the program prints else despite having one of the above condition is true why?


    return 0;
}