#include <iostream>
#include <exception>

class BaseException : public std::exception {
private:
    std::string message;
public:
    BaseException(const std::string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

class SpecificException : public BaseException {
public:
    SpecificException() : BaseException("Specific exception occurred") {}
};

int main() {
    try {
        throw SpecificException();
    } catch (const BaseException& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}