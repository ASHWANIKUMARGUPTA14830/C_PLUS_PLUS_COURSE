#include <iostream>

int main() {
    int* data = new int[100];
    // Memory leak: Forgot to delete[] data
    // Missing 'delete[] data;' can lead to a memory leak.
    
    // Don't forget to free memory when done
    delete[] data;
    return 0;
}
