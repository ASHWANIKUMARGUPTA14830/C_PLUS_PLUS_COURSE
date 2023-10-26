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

int main() {
    Shape* myShape = new Rectangle(5, 10);
    cout << "Area: " << myShape->getArea() << endl;
    delete myShape;
    return 0;
}
