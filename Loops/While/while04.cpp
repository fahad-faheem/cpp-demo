#include <iostream>
using namespace std;

int main() {


int teacups;
cout << "Enter the number of the cups sold" << endl;
cin >> teacups;


while (teacups > 0){

    teacups--;
    cout << "One tea cup sold, Number of cups left is " << teacups <<"."<< endl;

}
    return 0;
}

