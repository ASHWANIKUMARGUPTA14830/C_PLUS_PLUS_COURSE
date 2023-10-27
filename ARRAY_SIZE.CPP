#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    cout << sizeof(numbers) / sizeof(numbers[0]) << endl;
    // Output: 5 (Size of the array)

    return 0;
}
