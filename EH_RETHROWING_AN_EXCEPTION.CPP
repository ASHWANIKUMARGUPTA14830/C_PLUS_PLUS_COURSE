#include <iostream>
void foo() {
    throw std::runtime_error("An error occurred");
}

int main() {
    try {
        foo();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught in main: " << e.what() << std::endl;
        throw;  // Rethrow the exception
    }
    return 0;
}
