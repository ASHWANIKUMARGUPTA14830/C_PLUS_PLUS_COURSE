class Rectangle {
private:
    int length;
    int width;
public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }
    int calculateArea() {
        return length * width;
    }
};
