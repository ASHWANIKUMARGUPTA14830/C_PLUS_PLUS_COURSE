class Animal {
private:
    int age;
protected:
    string name;
public:
    void setAge(int a) {
        age = a;
    }
};

class Dog : public Animal {
public:
    void setName(string n) {
        name = n; // Protected member accessible in derived class
    }
};

int main() {
    Dog myDog;
    //myDog.age = 5; // Private member not accessible in derived class
    myDog.setName("Buddy");
    return 0;
}
