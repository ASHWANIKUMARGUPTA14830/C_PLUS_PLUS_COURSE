#include <iostream>

void recursivePrint(int n) {
    if (n > 0) {
        recursivePrint(n - 1);
        std::cout << n << " ";
    }
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Printing numbers from 1 to " << num << ": ";
    recursivePrint(num);
    std::cout << std::endl;
    return 0;
}
