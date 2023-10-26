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
