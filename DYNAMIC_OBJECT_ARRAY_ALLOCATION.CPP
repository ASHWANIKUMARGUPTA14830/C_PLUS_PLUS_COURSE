#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& name) : name_(name) {}

    void introduce() {
        std::cout << "My name is " << name_ << std::endl;
    }

private:
    std::string name_;
};

int main() {
    const int numPeople = 3;
    Person* people = new Person[numPeople] {
        Person("Alice"),
        Person("Bob"),
        Person("Charlie")
    };

    for (int i = 0; i < numPeople; ++i) {
        people[i].introduce();
    }

    // Deallocate the array of people
    delete[] people;

    return 0;
}
