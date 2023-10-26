class Animal {
protected:
    string name;
public:
    Animal(string n) {
        name = n;
        cout << "Animal object created" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) { // Call base class constructor
        cout << "Dog object created" << endl;
    }
    
    void bark() {
        cout << name << " is barking" << endl; // Access base class member
    }
};

int main() {
    Dog myDog("Buddy");
    myDog.bark();
    
    return 0;
}
