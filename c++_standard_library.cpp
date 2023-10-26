#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(source.size());

    std::copy(source.begin(), source.end(), destination.begin());

    // Output the elements in the destination vector
    for (const auto& element : destination) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
