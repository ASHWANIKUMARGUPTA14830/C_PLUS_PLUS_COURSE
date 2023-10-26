class Shape {
protected:
    double width, height;
public:
    Shape(double w, double h) {
        width = w;
        height = h;
    }
    virtual double getArea() = 0;
    void printDimensions() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}
    double getArea() {
        return width * height;
    }
};

int main() {
    Shape* myShape = new Rectangle(5, 3);
    myShape->printDimensions();
    cout << "Area: " << myShape->getArea() << endl;
    delete myShape;
    return 0;
}
