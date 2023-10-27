#include <iostream>
int main() {
    try {
        throw std::runtime_error("An error occurred");
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime error caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "General exception caught: " << e.what() << std::endl;
    }
    return 0;
}
