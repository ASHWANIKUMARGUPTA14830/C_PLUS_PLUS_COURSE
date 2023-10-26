class Rectangle {
private:
    double length;
    double width;
public:
    void setLength(double length) {
        this->length = length;
    }
    void setWidth(double width) {
        this->width = width;
    }
    double getLength() {
        return length;
    }
    double getWidth() {
        return width;
    }
    double area() {
        return length * width;
    }
};
