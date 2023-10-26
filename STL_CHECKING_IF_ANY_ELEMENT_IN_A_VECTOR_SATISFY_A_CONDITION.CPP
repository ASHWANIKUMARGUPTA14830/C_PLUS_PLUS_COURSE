#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    bool hasEvenNumber = std::any_of(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });

    if (hasEvenNumber) {
        std::cout << "The vector contains at least one even number." << std::endl;
    } else {
        std::cout << "The vector does not contain any even number." << std::endl;
    }

    return 0;
}
