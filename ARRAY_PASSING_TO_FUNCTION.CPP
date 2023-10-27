#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Passing array to a function
    printArray(numbers, 5); // Output: 10 20 30 40 50

    return 0;
}
