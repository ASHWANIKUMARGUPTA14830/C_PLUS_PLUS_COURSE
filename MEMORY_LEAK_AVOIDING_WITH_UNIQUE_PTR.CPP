#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int[]> data = std::make_unique<int[]>(1000);
    // Memory is automatically released when data goes out of scope

    return 0;
}
