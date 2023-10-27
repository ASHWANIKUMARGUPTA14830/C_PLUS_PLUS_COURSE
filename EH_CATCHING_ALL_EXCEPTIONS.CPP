#include <iostream>
int main() {
    try {
        throw 42;
    } catch (...) {
        std::cerr << "Caught an unknown exception" << std::endl;
    }
    return 0;
}
