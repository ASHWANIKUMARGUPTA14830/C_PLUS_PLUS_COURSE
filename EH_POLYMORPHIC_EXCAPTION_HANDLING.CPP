#include <iostream>
#include <exception>
#include <typeinfo>

class BaseException : public std::exception {
public:
    virtual const char* what() const noexcept {
        return "Base exception occurred";
    }
};

class SpecificException : public BaseException {
public:
    const char* what() const noexcept override {
        return "Specific exception occurred";
    }
};

int main() {
    try {
        throw SpecificException();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
        if (typeid(e) == typeid(SpecificException)) {
            std::cerr << "It's a SpecificException." << std::endl;
        }
    }
    return 0;
}
