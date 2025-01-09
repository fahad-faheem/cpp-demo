#include <iostream>
using namespace std;

class Car {

    private:

    string owner;
    int numberplate;
    int price;
    string color;
    string company;

    public:

    friend void adddata (Car& Rose_1, string car_owner, int car_numberplate, int car_price, string car_color, string car_company);
    friend void printdata (Car& r);

};

void adddata (Car& r, string car_owner, int car_numberplate, int car_price, string car_color, string car_company){

    r.owner = car_owner;
    r.numberplate = car_numberplate;
    r.price = car_price;
    r.color = car_color;
    r.company = car_company;

}

void printdata (Car& r){

    cout << r.owner << endl;
    cout << r.numberplate << endl;
    cout << r.price << endl;
    cout << r.color << endl;
    cout << r.company << endl;

}

int main (){


    Car Rose_1;

    adddata (Rose_1, "Rose1", 8686, 200000, "White", "Toyota");
    printdata (Rose_1);






    return 0;

}