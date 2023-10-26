class Animal {
public:
    virtual void makeSound() {
        cout << "Animal is making a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Animal* myAnimal = new Animal;
    myAnimal->makeSound();
    
    myAnimal = new Dog;
    myAnimal->makeSound();
    
    delete myAnimal;
    return 0;
}
