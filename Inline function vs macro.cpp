
#include <iostream>
using namespace std;

#define SQR(x) x*x

inline int sqr(int x) {
    return x * x;
}

int main() {
    cout << "SQR(2+3) = " << SQR(2+3) << endl;
    cout << "sqr(2+3) = " << sqr(2+3) << endl;

    return 0;
}
