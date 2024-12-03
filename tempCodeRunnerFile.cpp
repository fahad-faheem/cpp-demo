#include <iostream>
#include <string>
using namespace std;

int main() {
    int totalPrice;
    int numberofCups;
    int pricePerCup;
    double discount;
    string DiscountinPercentage;

    cout << "How much cups of coffe you want to drink today my loyal customer: " << endl;
        cin >> numberofCups;

    cout << "Great! So today you will decide the price for every cup." << endl;
    cin >> pricePerCup;

    totalPrice = numberofCups * pricePerCup;
    
   
if (totalPrice > 100){  
        discount = 0.10;
        totalPrice = totalPrice - (totalPrice * discount);

        if (discount = 0.10){
        DiscountinPercentage = "10%";
        }

        cout << "WOW! You've decided the price of cups and still so much cost of coffee? You deserve a " << DiscountinPercentage << " discount!" << endl;

        cout << "You're total price after discount is " << totalPrice << endl;
}


else {
             cout << "The total price of tea is " << totalPrice << endl;
}
            return 0;
}