#include <iostream>

int main() {
    double num1, num2, num3;
    
    // Prompt the user to enter three numbers
    std::cout << "Enter three numbers, separated by spaces: ";
    std::cin >> num1 >> num2 >> num3;
    
    // Calculate the average
    double average = (num1 + num2 + num3) / 3.0;
    
    // Display the result
    std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << std::endl;
    
    return 0;
}
