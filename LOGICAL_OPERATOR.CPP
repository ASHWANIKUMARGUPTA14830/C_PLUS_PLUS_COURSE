#include <iostream>
using namespace std;

int main() {
    bool isSunny = true;
    bool isWarm = false;

    bool goToBeach = isSunny && isWarm; // Logical AND
    bool watchMovie = isSunny || isWarm; // Logical OR
    bool stayHome = !isSunny; // Logical NOT

    cout << "Go to Beach: " << goToBeach << endl;
    cout << "Watch Movie: " << watchMovie << endl;
    cout << "Stay Home: " << stayHome << endl;

    return 0;
}
