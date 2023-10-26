#include <iostream>

int main() {
    const double pi = 3.14159;
    double radius = 5.0;

    double area = pi * radius * radius;

    std::cout << "The area of a circle with radius " << radius << " is: " << area << std::endl;

    return 0;
}
