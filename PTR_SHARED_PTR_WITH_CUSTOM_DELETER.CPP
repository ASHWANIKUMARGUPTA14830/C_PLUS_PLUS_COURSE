#include <iostream>
#include <memory>

int main() {
    auto customDeleter = [](int* ptr) {
        // Custom cleanup logic here.
        delete ptr;
    };
    std::shared_ptr<int> customSharedData(new int(42), customDeleter);
    return 0;
}
