#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person people[] = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};

    for (int i = 0; i < 3; i++) {
        cout << "Name: " << people[i].name << ", Age: " << people[i].age << endl;
    }

    return 0;
}
