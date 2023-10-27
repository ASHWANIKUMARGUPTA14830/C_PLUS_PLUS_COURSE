#include <iostream>

void add(int a, int b) {
    std::cout << "Sum: " << (a + b) << std::endl;
}

void subtract(int a, int b) {
    std::cout << "Difference: " << (a - b) << std::endl;
}

void multiply(int a, int b) {
    std::cout << "Product: " << (a * b) << std::endl;
}

int main() {
    // Array of function pointers
    void (*mathFuncs[])(int, int) = {add, subtract, multiply};

    int choice;
    std::cout << "Enter 0 for addition, 1 for subtraction, or 2 for multiplication: ";
    std::cin >> choice;

    if (choice < 0 || choice > 2) {
        std::cout << "Invalid choice." << std::endl;
        return 1;
    }

    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    mathFuncs[choice](a, b);  // Call the selected function
    return 0;
}
