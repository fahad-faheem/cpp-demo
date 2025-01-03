#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
    }

    // Function to display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object using parameterized constructor
    Student s1("Alice", 20);

    // Creating another object using the copy constructor
    Student s2 = s1;

    // Displaying details of both objects
    cout << "Student 1: ";
    s1.display();

    cout << "Student 2 (Copied): ";
    s2.display();

    return 0;
}
