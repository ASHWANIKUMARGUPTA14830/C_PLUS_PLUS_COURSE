#include <iostream>
#include <fstream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    ofstream file("data.bin", ios::binary); // Open a binary file for writing

    if (file.is_open()) {
        Person person = {"Alice", 25};
        file.write(reinterpret_cast<char*>(&person), sizeof(Person)); // Write binary data
        file.close(); // Close the file
    }

    return 0;
}
