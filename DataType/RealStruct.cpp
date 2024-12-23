#include <iostream>
using namespace std;

// Define a structure for a person
struct Person {
    string name;
    int age;
    float height;
};

int main() {
    // Create a structure variable
    Person p1 = {"Alice", 25, 5.7};

    // Access and display structure members
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << " ft" << endl;

    return 0;
}

// A struct is a collection of variables (of different types) 
// grouped under one name. Each variable in the structure gets its own memory space.



















// Structure (struct)
// A struct is a collection of variables (of different types)
//  grouped under one name. Each variable in the structure gets its own memory space.