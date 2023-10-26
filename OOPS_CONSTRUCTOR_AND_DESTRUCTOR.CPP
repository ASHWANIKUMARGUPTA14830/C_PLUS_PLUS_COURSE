class Car {
private:
    string brand;
    int year;
public:
    Car(string b, int y) {
        brand = b;
        year = y;
        cout << "Car object created" << endl;
    }
    ~Car() {
        cout << "Car object destroyed" << endl;
    }
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};
