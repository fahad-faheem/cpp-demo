#include <iostream>
using namespace std;

void printingdata(int sales[], int day) {
    int totalsales = 0;
    int days = 1;

    for (int i = 0; i < 30; i++){
        // int days = 1;            // we should write it outside because Variables declared inside a loop's body (int days = 1;) are recreated and reinitialized in each iteration of the loop.
        cout << "Total sales on day " << days << " is " << sales[i] << endl;
        days++;
        totalsales = totalsales + sales[i];

    }

    cout << "Total month sales are " << totalsales << endl;
}

int main (){

    int onemonthdata [30] = {
        12, 45, 67, 23, 89, 34, 76, 11, 54, 98,
        32, 21, 47, 68, 29, 83, 56, 49, 72, 95,
        10, 63, 37, 88, 25, 41, 74, 66, 18, 59
    };



    printingdata(onemonthdata, 30);         // if the function is void this will print directly and sent the parameters all in one 


    return 0;
}