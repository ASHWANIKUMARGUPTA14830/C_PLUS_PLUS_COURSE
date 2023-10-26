class Animal {
public:
    Animal() {
        cout << "Animal constructor called" << endl;
    }
    
    Animal(const Animal& other) {
        cout << "Animal copy constructor called" << endl;
    }
    
    virtual ~Animal() {
        cout << "Animal destructor called" << endl;
    }
    
    virtual void makeSound() {
        cout << "Animal is making a sound" << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called" << endl;
    }
    
    Dog(const Dog& other) : Animal(other) {
        cout << "Dog copy constructor called" << endl;
    }
    
    ~Dog() {
        cout << "Dog destructor called" << endl;
    }
    
    void makeSound() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog myDog1;
    
    Dog myDog2 = myDog1; // Copy constructor
    
    return 0;
}
