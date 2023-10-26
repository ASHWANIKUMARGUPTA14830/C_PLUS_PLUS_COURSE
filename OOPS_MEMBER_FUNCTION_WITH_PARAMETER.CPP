class Circle {
private:
    double radius;
public:
    void setRadius(double r) {
        radius = r;
    }
    double calculateArea() {
        return 3.14 * radius * radius;
    }
};
