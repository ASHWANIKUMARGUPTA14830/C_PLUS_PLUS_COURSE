#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 3, 1};

    auto minMaxPair = std::minmax_element(numbers.begin(), numbers.end());

    std::cout << "Minimum element: " << *minMaxPair.first << std::endl;
    std::cout << "Maximum element: " << *minMaxPair.second << std::endl;

    return 0;
}
