class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Cat myCat;
    myCat.eat();
    myCat.meow();

    Dog myDog;
    myDog.eat();
    myDog.bark();
    
    return 0;
}
