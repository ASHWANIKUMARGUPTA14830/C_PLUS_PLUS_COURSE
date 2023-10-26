class Student {
private:
    string name;
    int age;
public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    void setAge(int a) {
        age = a;
    }
    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setName("John");
    s.setAge(20);
    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    return 0;
}