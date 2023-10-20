#include <iostream>
using namespace std;

int main() {
    // Declare an array to store integers
    int myArray[5];

    // Initialize the array with values
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;

    // Display the elements of the array
    cout << "Array Elements: ";
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += myArray[i];
    }
    
    // Display the sum of the array elements
    cout << "Sum of Array Elements: " << sum << endl;

    // Find the maximum element in the array
    int max = myArray[0];
    for (int i = 1; i < 5; i++) {
        if (myArray[i] > max) {
            max = myArray[i];
        }
    }
    
    // Display the maximum element
    cout << "Maximum Element: " << max << endl;

    // Exit the program
    return 0;
}
