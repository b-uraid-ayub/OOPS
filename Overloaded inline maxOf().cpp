
#include <iostream>
using namespace std;

inline int maxOf(int a, int b) {
    return (a > b) ? a : b;
}

inline double maxOf(double a, double b) {
    return (a > b) ? a : b;
}

inline int maxOf(int a, int b, int c) {
    return maxOf(maxOf(a, b), c);
}

inline int maxOf(const int *arr, int n) {
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}

int main() {
    cout << maxOf(3, 8) << endl;
    cout << maxOf(2.5, 1.5) << endl;
    cout << maxOf(4, 9, 6) << endl;

    int arr[] = {4, 19, 7, 11};
    cout << maxOf(arr, 4) << endl;

    // Uncomment the next line to test the compiler error:
    // cout << maxOf(5, 2.5) << endl;

    return 0;
}
