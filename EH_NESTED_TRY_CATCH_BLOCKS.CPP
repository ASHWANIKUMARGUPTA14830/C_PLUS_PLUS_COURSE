#include <iostream>
int main() {
    try {
        try {
            throw std::logic_error("Inner exception");
        } catch (const std::exception& inner) {
            std::cerr << "Inner exception caught: " << inner.what() << std::endl;
        }
        throw std::runtime_error("Outer exception");
    } catch (const std::exception& outer) {
        std::cerr << "Outer exception caught: " << outer.what() << std::endl;
    }
    return 0;
}
