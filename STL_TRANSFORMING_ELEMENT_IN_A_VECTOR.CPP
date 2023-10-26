#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> doubledNumbers;

    std::transform(numbers.begin(), numbers.end(), std::back_inserter(doubledNumbers), [](int num) {
        return num * 2;
    });

    std::cout << "Doubled numbers: ";
    for (const auto& num : doubledNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
