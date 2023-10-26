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
    Animal* myAnimal = new Dog;
    
    Dog* myDog = dynamic_cast<Dog*>(myAnimal);
    
    if (myDog != nullptr) {
        myDog->makeSound();
    }
    
    delete myAnimal;
    
    return 0;
}
