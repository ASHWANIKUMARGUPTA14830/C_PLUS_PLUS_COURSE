#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers1 = {1, 2, 3, 4, 5};
    std::vector<int> numbers2 = {6, 7, 8, 9, 10};

    std::vector<int> result(numbers1.size());
    std::transform(numbers1.begin(), numbers1.end(), numbers2.begin(), result.begin(),
        [](int a, int b) { return a * b; });

    std::cout << "Result: ";
    for (const auto& num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
