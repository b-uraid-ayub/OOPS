
#include <iostream>
#include <string>
using namespace std;

void print(int x) {
    cout << "int: " << x << endl;
}

void print(double x) {
    cout << "double: " << x << endl;
}

void print(char x) {
    cout << "char: " << x << endl;
}

void print(string x) {
    cout << "string: " << x << endl;
}

int main() {
    print(10);
    print(3.14);
    print('A');
    print(string("IUST"));

    return 0;
}
