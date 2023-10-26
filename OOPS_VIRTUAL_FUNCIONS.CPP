class Animal {
public:
    virtual void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void eat() {
        cout << "Dog is eating" << endl;
    }
};

int main() {
    Animal* myAnimal = new Dog;
    myAnimal->eat();
    delete myAnimal;
    return 0;
}
