class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Mammal : virtual public Animal {
public:
    void run() {
        cout << "Mammal is running" << endl;
    }
};

class Bird : virtual public Animal {
public:
    void fly() {
        cout << "Bird is flying" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void sleep() {
        cout << "Bat is sleeping" << endl;
    }
};

int main() {
    Bat myBat;
    myBat.eat();
    myBat.run();
    myBat.fly();
    myBat.sleep();
    return 0;
}
