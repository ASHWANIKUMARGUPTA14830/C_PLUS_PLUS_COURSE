#include <iostream>
#include <queue>

int main() {
    std::queue<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    std::cout << "Front element: " << numbers.front() << std::endl;
    return 0;
}
