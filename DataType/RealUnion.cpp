#include <iostream>
using namespace std;

// Define a union
union Data {
    int id;
    float salary;
    char grade;
};

int main() {
    // Create a union variable
    Data d;

    // Assign values to union members
    d.id = 101;
    cout << "ID: " << d.id << endl;

    d.salary = 5500.50;
    cout << "Salary: " << d.salary << endl;

    d.grade = 'A';
    cout << "Grade: " << d.grade << endl;

    // Note: Accessing d.id or d.salary now would give unexpected results
    // because the memory is shared with d.grade.

    return 0;
}



// A union is similar to a struct,
//  but its members share the same memory space. This means only one member can hold a value at any given time.