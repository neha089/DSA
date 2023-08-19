#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    float rm[3] = {0, 0, 0};
    float x, y, z;
    float total, day1, day2, day3;

    cout << "Please enter total: ";
    cin >> total;

    cout << "How many days are all present? ";
    cin >> day1;
    rm[0] += (day1 * (total / (30 * 3)));
    rm[1] += (day1 * (total / (30 * 3)));
    rm[2] += (day1 * (total / (30 * 3)));

    cout << "How many days are only two present? ";
    cin >> day2;
    cout << "Please enter their indices: ";
    cin >> x >> y;

    if ((x == 0 && y == 1) || (y == 0 && x == 1)) {
        rm[0] += (day2 * (total / (30 * 2)));
        rm[1] += (day2 * (total / (30 * 2)));
    }
    if ((x == 0 && y == 2) || (y == 0 && x == 2)) {
        rm[0] += (day2 * (total / (30 * 2)));
        rm[2] += (day2 * (total / (30 * 2)));
    }
    if ((x == 1 && y == 2) || (y == 1 && x == 2)) {
        rm[2] += (day2 * (total / (30 * 2)));
        rm[1] += (day2 * (total / (30 * 2)));
    }
int a,b;
    cout << "How many days is only one present? ";
    cin >> day3;
    cout << "Please enter their index: ";
    cin >> z >> a >> b;

    if (z == 0)
        rm[0] += (day3 * (total / 30));
    if (z == 1)
        rm[1] += (day3 * (total / 30));
    if (z == 2)
        rm[2] += (day3 * (total / 30));

    cout << "The results are:" << endl;
    cout << "Person 1: " << round(rm[0]) << " units" << endl;
    cout << "Person 2: " << round(rm[1]) << " units" << endl;
    cout << "Person 3: " << round(rm[2]) << " units" << endl;

    return 0;
}
