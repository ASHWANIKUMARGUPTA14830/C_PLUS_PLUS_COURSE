class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Mammal : public Animal {
public:
    void run() {
        cout << "Mammal is running" << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();
    myDog.run();
    myDog.bark();
    return 0;
}
