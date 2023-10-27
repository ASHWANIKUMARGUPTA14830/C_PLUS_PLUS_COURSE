#include <iostream>
class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred";
    }
};

int main() {
    try {
        throw MyException();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
