#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers1 = {1, 2, 3, 4, 5};
    std::vector<int> numbers2(numbers1.size());

    auto it = std::copy_if(numbers1.begin(), numbers1.end(), numbers2.begin(),
        [](int num) { return num % 2 == 0; });

    numbers2.resize(std::distance(numbers2.begin(), it));

    std::cout << "Even numbers: ";
    for (const auto& num : numbers2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
