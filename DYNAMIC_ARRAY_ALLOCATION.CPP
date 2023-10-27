#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    // Dynamically allocate an integer array
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = i * 2;
    }

    std::cout << "Array elements: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    // Deallocate the memory
    delete[] arr;

    return 0;
}
