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

    // Method to calculate volume
    int volume() {
        return length * breadth * height;
    }
};

int main() {
    // Creating an object of Box class with parameters
    Box box1(5, 3, 2);  // Pass values to the constructor

    // Displaying the volume of the box
    cout << "Volume of box1: " << box1.volume() << endl;

    // Creating another object of Box class with different parameters
    Box box2(10, 7, 4);  // Pass different values

    // Displaying the volume of the second box
    cout << "Volume of box2: " << box2.volume() << endl;

    return 0;
}
