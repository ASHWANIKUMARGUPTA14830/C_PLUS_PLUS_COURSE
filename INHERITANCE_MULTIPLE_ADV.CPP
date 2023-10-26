class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Bird {
public:
    void fly() {
        cout << "Bird is flying" << endl;
    }
};

class Penguin : public Animal, public Bird {
public:
    void swim() {
        cout << "Penguin is swimming" << endl;
    }
};

int main() {
    Penguin myPenguin;
    myPenguin.eat();
    myPenguin.fly();
    myPenguin.swim();
    return 0;
}
