#include <iostream>
#include <string>

using namespace std;

 

int main (){

    // user defined data type
    
    // Structure is used to store large amout of different types of data,
    // It is same is Arrays but it can store data of different types,
    // Stuct (Name of whole data) {Data types variable declaration or initialization (optional)}
    // we can call specific type of data from structure like
    // Struct (Block of data name) (Name of data owner) {Here we can give values to all variable};
    // We can also use shortcut for it
    // typedef struct (Name) {Data types and variable} ed; then we can write just 
    // instead of writing struct (Block of data name) Name;
    // ed (Name of data owner)                                          // note: we would declare this outside of main function
    // Note: User defined Important
    // Example 


     struct Playerresult {              // it is like declaring different variable

        long long int Uid;
        int Rank;
        float kd;
        string Gun;
        double Damage;

    };



    struct Playerresult Abadi; {        // it is like asigning name to variables  Name.varibale 
  
        Abadi.Uid = 5657889951;
        Abadi.Rank = 1;
        Abadi.kd = 9.1;
        Abadi.Gun = "M416";
        Abadi.Damage = 1800;

    } 
    

    cout << "WINNER WINNER CHICKEN DINNER" << endl;
    cout << "Player ID: " << Abadi.Uid << endl;
    cout << "Player Rank: " << Abadi.Rank << endl;
    cout << "Player K/D: " << Abadi.kd << endl;
    cout << "Player Gun: " << Abadi.Gun << endl;
    cout << "Player Damage: " << Abadi.Damage << endl;




    return 0;
}