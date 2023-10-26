class Animal {
public:
    virtual void makeSound() {
        cout << "Animal is making a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();
    return 0;
}
