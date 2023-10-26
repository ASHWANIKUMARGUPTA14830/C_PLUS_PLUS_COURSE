class Animal {
protected:
    string name;
public:
    void setName(string name) {
        this->name = name;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << name << " is barking" << endl;
    }
};

int main() {
    Dog dog;
    dog.setName("Buddy");
    dog.bark(); // Output: Buddy is barking
    //dog.name = "Max"; // Compilation error - protected member not accessible outside the class or derived classes
    return 0;
}
