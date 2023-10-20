#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    if (x > 0) {
        if (y > 0) {
            cout << "Quadrant I" << endl;
        } else if (y < 0) {
            cout << "Quadrant IV" << endl;
        } else {
            cout << "On the positive x-axis" << endl;
        }
    } else if (x < 0) {
        if (y > 0) {
            cout << "Quadrant II" << endl;
        } else if (y < 0) {
            cout << "Quadrant III" << endl;
        } else {
            cout << "On the negative x-axis" << endl;
        }
    } else {
        if (y != 0) {
            cout << "On the y-axis" << endl;
        } else {
            cout << "At the origin" << endl;
        }
    }

    return 0;
}
