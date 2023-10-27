#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called." << std::endl;
    delete[] ptr;
}

int main() {
    std::shared_ptr<int> data(new int[1000], customDeleter);
    try {
        throw std::runtime_error("An exception occurred.");
    } catch (const std::exception& e) {
        // Custom deleter ensures memory cleanup even in the presence of an exception
    }

    return 0;
}
