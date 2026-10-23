
#include <iostream>
#include <cmath>
using namespace std;

inline double area(double r) {
    return 3.1416 * r * r;
}

inline double area(double l, double b) {
    return l * b;
}

inline double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    cout << area(2.0) << endl;
    cout << area(4.0, 5.0) << endl;
    cout << area(3.0, 4.0, 5.0) << endl;

    return 0;
}
