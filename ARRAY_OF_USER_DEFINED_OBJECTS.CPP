#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    Student(string n, int a) : name(n), age(a) {}
};

int main() {
    Student students[] = {Student("Anna", 22), Student("David", 21), Student("Emily", 23)};

    for (int i = 0; i < 3; i++) {
        cout << "Name: " << students[i].name << ", Age: " << students[i].age << endl;
    }

    return 0;
}
