
#include <iostream>
using namespace std;

inline double cToF(double c) {
    return (c * 9.0 / 5.0) + 32;
}

inline double fToC(double f) {
    return (f - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    double temp;

    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    if (choice == 1) {
        cout << cToF(temp) << " F";
    }
    else if (choice == 2) {
        cout << fToC(temp) << " C";
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}
