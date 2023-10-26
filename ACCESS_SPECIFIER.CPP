#include <iostream>

class MyClass {
public:
    int publicVariable;
    void publicMethod() {
        std::cout << "This is a public method." << std::endl;
    }
private:
    int privateVariable;
    void privateMethod() {
        std::cout << "This is a private method." << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.publicVariable = 42;
    obj.publicMethod();
    // obj.privateVariable = 0; // This line would cause a compiler error
    // obj.privateMethod(); // This line would also cause a compiler error
    return 0;
}
