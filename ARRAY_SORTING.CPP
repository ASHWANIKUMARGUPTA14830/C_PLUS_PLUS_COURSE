#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numbers[5] = {50, 30, 20, 40, 10};

    // Sorting the array in ascending order
    sort(numbers, numbers + sizeof(numbers) / sizeof(numbers[0]));

    // Accessing sorted array elements
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        cout << numbers[i] << " ";
    }
    // Output: 10 20 30 40 50

    return 0;
}
