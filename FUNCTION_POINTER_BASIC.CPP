#include <iostream>

// Function pointer type
typedef void (*FunctionPointer)();

// Functions to be called
void function1() {
    std::cout << "Function 1 called." << std::endl;
}

void function2() {
    std::cout << "Function 2 called." << std::endl;
}

int main() {
    FunctionPointer funcPtr;

    int choice;
    std::cout << "Enter 1 for function1 or 2 for function2: ";
    std::cin >> choice;

    if (choice == 1) {
        funcPtr = function1;
    } else if (choice == 2) {
        funcPtr = function2;
    } else {
        std::cout << "Invalid choice." << std::endl;
        return 1;
    }

    funcPtr();  // Call the selected function
    return 0;
}
