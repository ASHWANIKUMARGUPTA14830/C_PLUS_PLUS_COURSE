#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& name) : name_(name) {
        std::cout << "Constructing " << name_ << std::endl;
    }

    ~Person() {
        std::cout << "Destructing " << name_ << std::endl;
    }

private:
    std::string name_;
};

int main() {
    Person* person1 = new Person("Alice");
    Person* person2 = new Person("Bob");

    // Deallocate individual objects
    delete person1;
    delete person2;

    return 0;
}
