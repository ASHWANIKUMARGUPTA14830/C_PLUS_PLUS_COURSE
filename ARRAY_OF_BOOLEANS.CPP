#include <iostream>
using namespace std;

int main() {
    bool flags[] = {true, false, true, true};

    for (int i = 0; i < 4; i++) {
        cout << "Flag " << i + 1 << ": " << (flags[i] ? "true" : "false") << endl;
    }

    return 0;
}
