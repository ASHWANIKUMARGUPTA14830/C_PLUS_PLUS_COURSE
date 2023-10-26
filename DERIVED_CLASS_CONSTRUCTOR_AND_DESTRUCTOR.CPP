class Animal {
public:
    Animal() {
        cout << "Animal object created" << endl;
    }
    ~Animal() {
        cout << "Animal object destroyed" << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog object created" << endl;
    }
    ~Dog() {
        cout << "Dog object destroyed" << endl;
    }
};

int main() {
    Dog myDog;
    return 0;
}
