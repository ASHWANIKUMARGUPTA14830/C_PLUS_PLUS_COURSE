#include <iostream>
#include <memory>

int main() {
    auto customDeleter = [](int* ptr) {
        // Custom cleanup logic here.
        delete ptr;
    };
    std::unique_ptr<int, decltype(customDeleter)> customData(new int(42), customDeleter);
    return 0;
}
