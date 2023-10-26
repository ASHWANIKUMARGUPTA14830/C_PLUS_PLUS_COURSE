class Circle {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double calculateArea() const {
        return 3.14 * radius * radius;
    }
};

int main() {
    const Circle c(5);
    double area = c.calculateArea();
    cout << "Area: " << area << endl;
    return 0;
}
