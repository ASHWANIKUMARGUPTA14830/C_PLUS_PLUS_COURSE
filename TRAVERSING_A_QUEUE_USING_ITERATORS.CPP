#include <iostream>
#include <queue>

int main() {
    std::queue<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);
    numbers.push(5);

    while (!numbers.empty()) {
        std::cout << numbers.front() << " ";
        numbers.pop();
    }

    return 0;
}
