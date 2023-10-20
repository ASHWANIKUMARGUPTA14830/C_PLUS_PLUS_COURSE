#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Declare a vector to store a collection of numbers
    vector<int> numbers = {17, 4, 8, 12, 29, 5};

    // Find the minimum and maximum values using the min_element and max_element functions
    int minVal = *min_element(numbers.begin(), numbers.end());
    int maxVal = *max_element(numbers.begin(), numbers.end());

    // Display the minimum and maximum values
    cout << "Minimum Value: " << minVal << endl;
    cout << "Maximum Value: " << maxVal << endl;

    return 0;
}
