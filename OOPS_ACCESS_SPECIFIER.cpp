class Person {
public:
    string name;
protected:
    int age;
private:
    double salary;
};

int main() {
    Person p;
    p.name = "John"; // Public member accessible outside the class
    p.age = 25;     // Protected member accessible within the class and derived classes
    //p.salary = 5000; // Private member not accessible outside the class
    return 0;
}
