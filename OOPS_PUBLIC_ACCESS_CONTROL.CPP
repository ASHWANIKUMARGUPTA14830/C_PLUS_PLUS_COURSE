class Person {
public:
    string name;
    int age;
};

int main() {
    Person p;
    p.name = "John";
    p.age = 25;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    return 0;
}
