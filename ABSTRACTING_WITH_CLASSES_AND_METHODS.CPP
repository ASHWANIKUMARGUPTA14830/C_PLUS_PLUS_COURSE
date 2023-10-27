#include <iostream>

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function for abstraction
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;

    Shape* shapes[] = {&circle, &square};

    for (Shape* shape : shapes) {
        shape->draw();
    }

    return 0;
}
