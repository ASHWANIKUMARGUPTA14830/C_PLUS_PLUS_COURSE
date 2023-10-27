#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedData = std::make_shared<int>(42);
    std::shared_ptr<int> anotherSharedData = sharedData;
    // Memory is released when all shared_ptr instances go out of scope.
    return 0;
}
