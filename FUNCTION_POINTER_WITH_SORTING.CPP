#include <iostream>
#include <algorithm>

// Comparison function pointer type
typedef bool (*ComparisonFunction)(int, int);

// Comparison functions
bool ascending(int a, int b) {
    return a < b;
}

bool descending(int a, int b) {
    return a > b;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6, 3, 8};

    ComparisonFunction compare = descending;  // Change to ascending for ascending order

    std::sort(arr, arr + sizeof(arr) / sizeof(arr[0]), compare);

    std::cout << "Sorted array: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
