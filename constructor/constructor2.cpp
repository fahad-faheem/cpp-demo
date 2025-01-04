#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    // Constructor to initialize the values
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Method to calculate area
    int area() {
        return length * width;
    }
};

int main() {
    // Creating an object of Rectangle class and passing values to the constructor
    Rectangle rect(10, 5);

    // Output the area of the rectangle
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}
