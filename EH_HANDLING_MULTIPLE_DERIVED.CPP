#include <iostream>
#include <exception>

class BaseException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Base exception occurred";
    }
};

class SpecificException : public BaseException {
public:
    const char* what() const noexcept override {
        return "Specific exception occurred";
    }
};

class AnotherSpecificException : public BaseException {
public:
    const char* what() const noexcept override {
        return "Another specific exception occurred";
    }
};

int main() {
    try {
        throw SpecificException();
    } catch (const SpecificException& e) {
        std::cerr << "Specific exception caught: " << e.what() << std::endl;
    } catch (const AnotherSpecificException& e) {
        std::cerr << "Another specific exception caught: " << e.what() << std::endl;
    } catch (const BaseException& e) {
        std::cerr << "Base exception caught: " << e.what() << std::endl;
    }
    return 0;
}
