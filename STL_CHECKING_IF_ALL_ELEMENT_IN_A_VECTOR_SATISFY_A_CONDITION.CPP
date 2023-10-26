#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    bool allEven = std::all_of(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });

    if (allEven) {
        std::cout << "All elements are even." << std::endl;
    } else {
        std::cout << "Not all elements are even." << std::endl;
    }

    return 0;
}
