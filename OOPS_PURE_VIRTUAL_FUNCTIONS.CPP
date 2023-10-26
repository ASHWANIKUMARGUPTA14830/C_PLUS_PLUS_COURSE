class Animal {
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Animal* myAnimal = new Dog;
    myAnimal->makeSound();
    delete myAnimal;
    return 0;
}
