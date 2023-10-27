#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedData = std::make_shared<int>(42);
    std::weak_ptr<int> weakData = sharedData;
    // Avoids circular references and potential memory leaks.
    return 0;
}
