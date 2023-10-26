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
    Dog myDog;
    
    Animal* myAnimal = &myDog;
    
    myAnimal->makeSound();
    
    return 0;
}
