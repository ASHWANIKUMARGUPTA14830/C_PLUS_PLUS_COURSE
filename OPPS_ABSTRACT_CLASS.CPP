class Shape {
public:
    virtual double getArea() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Shape* myShape = new Circle(5);
    cout << "Area: " << myShape->getArea() << endl;
    delete myShape;
    return 0;
}
