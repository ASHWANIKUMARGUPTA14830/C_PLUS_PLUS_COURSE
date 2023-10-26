class Shape {
protected:
    double width, height;
public:
    Shape(double w, double h) {
        width = w;
        height = h;
    }
    virtual double getArea() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}
    double getArea() {
        return width * height;
    }
};

class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}
    double getArea() {
        return 0.5 * width * height;
    }
};

int main() {
    Shape* myShape1 = new Rectangle(5, 3);
    cout << "Rectangle Area: " << myShape1->getArea() << endl;
    delete myShape1;

    Shape* myShape2 = new Triangle(4, 6);
    cout << "Triangle Area: " << myShape2->getArea() << endl;
    delete myShape2;

    return 0;
}
