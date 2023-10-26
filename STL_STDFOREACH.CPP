#include <iostream>
#include <vector>
#include <algorithm>

void printSquare(int num) {
    std::cout << num * num << " ";
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::for_each(numbers.begin(), numbers.end(), printSquare);

    return 0;
}