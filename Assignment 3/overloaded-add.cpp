
#include <iostream>
#include <string>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

inline double add(double a, double b) {
    return a + b;
}

inline int add(int a, int b, int c) {
    return a + b + c;
}

inline string add(string a, string b) {
    return a + b;
}

int main() {
    cout << add(3, 4) << endl;
    cout << add(2.5, 1.25) << endl;
    cout << add(1, 2, 3) << endl;
    cout << add(string("Hello, "), string("IUST")) << endl;

    return 0;
}
