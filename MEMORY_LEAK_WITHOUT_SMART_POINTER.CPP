#include <iostream>

int main() {
    int* data = new int[1000];
    // No delete to release memory
    // Memory leak occurs

    return 0;
}
