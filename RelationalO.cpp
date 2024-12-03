#include <iostream>
using namespace std;

int main () {
    
    int marks;
    char grade;

    cout << "Hello, Please enter your marks out of 100" << endl;
    cin >> marks;

    if (marks >= 90 && marks <= 100){
        grade = 'A';
        cout << "You're total marks is " << marks << " and grade is " << grade << endl;

}
    else if (marks >= 75 && marks < 90)
{
        grade = 'B';
        cout << "You're total marks is " << marks << " and grade is " << grade << endl;
}
    else if (marks >= 50 && marks < 75){
            grade = 'C';
            cout << "You're total marks is " << marks << " and grade is " << grade << endl;
}
    else if (marks < 50) {
            grade = 'F';
            cout << "Unfortunitly you're failed" << endl;
}
else  {
        cout << "You missed the oppurtunity by not writing numbers out of 100, Now politley wait for one day." << endl;
}

    return 0;
}
