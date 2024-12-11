#include <iostream>
using namespace std;

typedef struct outcomes {                   // write typedef to use the function across main block just using its given name
    int sales;
    int profit;
    int cost;
    char grade;
    string remarks;  

} statement;                                // Write the name you want to give to the function 


int main (){

    statement Anas; {

        Anas.sales = 100000;
        Anas.profit = 125000;
        Anas.cost = -25000;
        Anas.grade = 'A';
        Anas.remarks = "Personal, but Amazing!";

    }

 
    cout << "Anas whole month statements" << endl;
    cout << "Anas sales = " << Anas.sales << endl;
    cout << "Anas profit = " << Anas.profit << endl;
    cout << "Anas cost = " << Anas.cost << endl;
    cout << "Anas Grade = " << Anas.grade << endl;
    cout << "Remarks = " << Anas.remarks << endl;
    
    return 0;
}

// g(){
//     cout "Done, what next?" << endl;
// }-