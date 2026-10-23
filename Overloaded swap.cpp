
#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapValues(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

void swapValues(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1, b = 2;
    double x = 1.5, y = 2.5;
    char p = 'X', q = 'Y';

    swapValues(a, b);
    swapValues(x, y);
    swapValues(p, q);

    cout << a << " " << b << endl;
    cout << x << " " << y << endl;
    cout << p << " " << q << endl;

    return 0;
}
