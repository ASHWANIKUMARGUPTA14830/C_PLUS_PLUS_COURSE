#include <iostream>

int main() {
    int* data = new int[1000];
    try {
        throw std::runtime_error("An exception occurred.");
    } catch (const std::exception& e) {
        // No delete to release memory
        // Memory leak occurs
    }

    return 0;
}
