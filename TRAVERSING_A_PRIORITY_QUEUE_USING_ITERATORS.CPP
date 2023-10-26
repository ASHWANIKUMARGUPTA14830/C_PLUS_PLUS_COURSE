#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> numbers;
    numbers.push(5);
    numbers.push(3);
    numbers.push(1);
    numbers.push(4);
    numbers.push(2);

    while (!numbers.empty()) {
        std::cout << numbers.top() << " ";
        numbers.pop();
    }

    return 0;
}
