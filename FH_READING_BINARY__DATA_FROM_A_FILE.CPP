#include <iostream>
#include <fstream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    ifstream file("data.bin", ios::binary); // Open a binary file for reading

    if (file.is_open()) {
        Person person;
        file.read(reinterpret_cast<char*>(&person), sizeof(Person)); // Read binary data
        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        file.close(); // Close the file
    }

    return 0;
}
