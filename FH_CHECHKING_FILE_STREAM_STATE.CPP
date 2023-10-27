#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out);

    if (file) {
        if (file.fail()) {
            cout << "An error occurred while performing file operations!" << endl;
        } else if (file.eof()) {
            cout << "End of file reached!" << endl;
        }
    } else {
        cout << "Failed to open the file!" << endl;
    }

    file.close();

    return 0;
}
