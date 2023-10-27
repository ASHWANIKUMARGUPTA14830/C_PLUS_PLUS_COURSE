#include <iostream>

template <typename T>
class Printer {
public:
    void print(const T& data) {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    Printer<int> intPrinter;
    Printer<std::string> stringPrinter;

    intPrinter.print(42);
    stringPrinter.print("Hello, World!");

    return 0;
}
