#include <iostream>
void no_throw_function() noexcept {
    // This function won't throw exceptions.
}

int main() {
    try {
        no_throw_function();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
