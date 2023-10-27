#include <iostream>
using namespace std;

int* createArray(int size) {
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }

    return arr;
}

int main() {
    int* numbers = createArray(5);

    // Accessing elements of the returned array
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    // Output: 10 20 30 40 50

    delete[] numbers;

    return 0;
}
