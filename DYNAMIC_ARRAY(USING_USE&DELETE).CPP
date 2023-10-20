#include <iostream>
using namespace std;

int main() {
    int *dynamicArray = new int[5];

    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i * 10;
    }

    for (int i = 0; i < 5; i++) {
        cout << dynamicArray[i] << " ";
    }

    delete[] dynamicArray; // Don't forget to release memory

    return 0;
}
