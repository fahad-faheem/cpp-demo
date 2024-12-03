#include <iostream>
#include <string>
using namespace std;

int main() {
    int totalPrice;
    int numberOfCups;
    int pricePerCup;
    double discount;
    string discountInPercentage;
    string input;

    cout << "How many cups of coffee do you want to drink today, my loyal customer: " << endl;
    getline(cin, input);
    numberOfCups = stoi(input); // Convert string input to an integer

    cout << "Great! So today you will decide the price for every cup." << endl;
    getline(cin, input);
    pricePerCup = stoi(input); // Convert string input to an integer

    totalPrice = numberOfCups * pricePerCup;

    if (totalPrice > 100) {  
        discount = 0.10;
        totalPrice = totalPrice - (totalPrice * discount);

        discountInPercentage = "10%";

        cout << "WOW! You've decided the price of cups and still so much cost of coffee? You deserve a "
             << discountInPercentage << " discount!" << endl;

        cout << "Your total price after discount is " << totalPrice << endl;
    } else {
        cout << "The total price of coffee is " << totalPrice << endl;
    }

    return 0;
}
