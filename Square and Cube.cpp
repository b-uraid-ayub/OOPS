
#include <iostream>
using namespace std;

inline int square(int n) {
    return n * n;
}

inline int cube(int n) {
    return n * n * n;
}

int main() {
    cout << "n  Square  Cube" << endl;

    for (int n = 1; n <= 5; n++) {
        cout << n << "    "
             << square(n) << "       "
             << cube(n) << endl;
    }

    return 0;
}
