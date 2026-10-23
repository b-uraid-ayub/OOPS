
#include <iostream>
using namespace std;

inline int maxOf(int a, int b) {
    return (a > b) ? a : b;
}

inline int minOf(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int largest = maxOf(maxOf(a, b), c);
    int smallest = minOf(minOf(a, b), c);

    cout << "Max = " << largest << ", Min = " << smallest;

    return 0;
}
