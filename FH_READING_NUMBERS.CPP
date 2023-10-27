#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("numbers.txt");

    if (file.is_open()) {
        int number;
        while (file >> number) { // Read numbers separated by whitespace
            cout << number << " ";
        }
        file.close();
    }

    return 0;
}
