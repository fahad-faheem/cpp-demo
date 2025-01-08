#include <iostream>
using namespace std;

class Acc {
    private:
    string name;
    string owner;
    int code;
    string type;

    public:

    void setdata (string acc_name, string acc_owner, int acc_code, string acc_type){

        name = acc_name;
        owner = acc_owner;
        code = acc_code;
        type = acc_type;
        
    };

    void printdata  (){
        cout << name << endl;
        cout << owner << endl;
        cout << code << endl;
        cout << type << endl;
    };

};

class AccPrive:public Acc {
    public:

    void secretkey (int acc_key){
        cout << "Private account secret key is " << acc_key<< endl;
    };


};




int main (){

    Acc accout1, account2, account3;
    AccPrive privateAcc1, privateAcc2, privateAcc3;


    privateAcc1.setdata("Coding", "ME", 9876, "Public");
    privateAcc1.secretkey(3);
    privateAcc1.printdata();




return 0;

}