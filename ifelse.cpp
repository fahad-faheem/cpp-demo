<<<<<<< HEAD

#include <iostream>
#include <string>

using namespace std;

int main (){
 
 string TeaType;

 cout << "What type of tea you want to order ?" << endl;
 getline(cin, TeaType);

 
 if (TeaType == "Green Tea" && TeaType == "Red Tea" && TeaType == "Black Tea")
  {
cout << "You're order for " << TeaType << " has been confirmed" << endl;
 } else {
    cout << "Sorry the tea you want to order isn't avaiable please check the next shop for " << TeaType << ". Thank you!" << endl;
}

return 0;
}
=======
#include <iostream>
using namespace std;

int main (){    

int forTEACUPS;
int forTEAPRICE = 10;
int forTEATOTAL;

cout << "Enter the number of tea cups: ";
cin >> forTEACUPS;

forTEATOTAL = forTEACUPS * forTEAPRICE;

if ( forTEATOTAL > 100) {
forTEATOTAL = forTEATOTAL - (forTEATOTAL * 0.10 );

cout << "The total \" discounted \" price of tea is: " << forTEATOTAL << endl;


} else {
    cout << "The total price of tea is: " << forTEATOTAL << endl;
}


    return 0;
}


>>>>>>> 1f055fef1d272d5fffa7464d5a2061fc0024417c
