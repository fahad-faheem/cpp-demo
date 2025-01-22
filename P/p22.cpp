#include <iostream>
using namespace std;

class Car {
    private:
        string name;
        int model;
        string owner;
    public:

    void setdetails(string car_name, int car_model, string car_owner){
        name = car_name;
        model = car_model;
        owner = car_owner;
    };

    void getdetails (){
        cout << "Name: " << name << endl;
        cout << "Model: " << model << endl;
        cout << "Owner: " << owner << endl;
    };

};
int main  (){





    return 0;
}





