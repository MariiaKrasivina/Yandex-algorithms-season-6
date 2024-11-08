#include <iostream>
#include <vector>
using namespace std;



int main() {

    int x1, y1, x2, y2, xp, yp;
    cin >> x1 >> y1 >> x2 >> y2 >> xp >> yp;

    if (xp < x1 && yp > y1 && yp < y2) {
        cout << "W";
        exit(0);
    }

    if (yp > y2 && xp > x1 && xp < x2) {
        cout << "N";
        exit(0);
    }

    if (xp > x2 && yp > y1 && yp < y2) {
        cout << "E";
        exit(0);
    }

    if (yp < y1 && xp > x1 && xp < x2) {
        cout << "S";
        exit(0);
    }

    if (xp < x1 && yp > y2) {
        cout << "NW";
        exit(0);
    }

    if (xp < x1 && yp < y1) {
        cout << "SW";
        exit(0);
    }

    if (xp > x2 && yp > y2) {
        cout << "NE";
        exit(0);
    }

    if (xp > x2 && yp < y1) {
        cout << "SE";
        exit(0);
    }

    return 0;
}
