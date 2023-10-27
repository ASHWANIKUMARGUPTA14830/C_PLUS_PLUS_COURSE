#include <iostream>
int main() {
    throw std::runtime_error("Unhandled exception");
    return 0;  // This line won't be reached.
}
