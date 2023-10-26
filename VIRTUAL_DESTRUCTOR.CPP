class Animal {
public:
    virtual ~Animal() {
        cout << "Animal object destroyed" << endl;
    }
};

class Dog : public Animal {
public:
    ~Dog() override { // Override virtual destructor
        cout << "Dog object destroyed" << endl;
    }
};

int main() {
    Animal* myAnimal = new Dog();
    
    delete myAnimal; // Call virtual destructor
    
    return 0;
}
