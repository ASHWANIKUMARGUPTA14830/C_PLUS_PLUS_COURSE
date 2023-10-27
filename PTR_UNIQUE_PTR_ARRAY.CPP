#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int[]> dataArray(new int[100]);
    // Memory is automatically released when dataArray goes out of scope.
    return 0;
}
