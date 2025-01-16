#include <iostream>

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Method to calculate area
    double area() {
        return 3.14159 * radius * radius;
    }

    // Method to calculate circumference
    double circumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double r;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    Circle myCircle(r);

    std::cout << "Area of the circle: " << myCircle.area() << std::endl;
    std::cout << "Circumference of the circle: " << myCircle.circumference() << std::endl;

    return 0;
}
