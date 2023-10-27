#include <iostream>
#include <vector>
#include <algorithm>

bool ascending(int a, int b) {
    return a < b;
}

bool descending(int a, int b) {
    return a > b;
}

void customSort(std::vector<int>& data, bool (*compare)(int, int)) {
    std::sort(data.begin(), data.end(), compare);
}

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    
    customSort(numbers, ascending);
    std::cout << "Ascending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    customSort(numbers, descending);
    std::cout << "Descending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
