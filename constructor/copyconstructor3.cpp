#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int breadth;
    int height;

    // Parameterized constructor
    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    // Copy constructor
    Box(const Box &other) {
        length = other.length;
        breadth = other.breadth;
        height = other.height;
        cout << "Copy constructor called!" << endl;
    }

    // Method to display box dimensions
    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    Box box1(10, 5, 3);
    cout << "box1 dimensions: ";
    box1.display();

    // Creating a copy of box1 using the copy constructor
    Box box2 = box1;  // This calls the copy constructor

    cout << "box2 dimensions (copy of box1): ";
    box2.display();

    return 0;
}
