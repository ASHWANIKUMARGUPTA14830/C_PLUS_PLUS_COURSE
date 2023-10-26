#include <iostream>
#include <stack>

int main() {
    std::stack<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    std::cout << "Top element: " << numbers.top() << std::endl;
    return 0;
}
