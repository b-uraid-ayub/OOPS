
#include <iostream>
using namespace std;

inline bool isLeap(int year) {
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}

inline bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int year;
    cin >> year;

    if (isLeap(year))
        cout << "Leap" << endl;
    else
        cout << "Not leap" << endl;

    return 0;
}
