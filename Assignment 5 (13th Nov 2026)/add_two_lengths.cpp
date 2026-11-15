#include <iostream>
using namespace std;

class Length {
    int metres;

public:
    Length(int m) {
        metres = m;
    }

    Length add(Length other) {
        Length result(metres + other.metres);
        return result;
    }

    void show() {
        cout << metres << " metres" << endl;
    }
};

int main() {
    Length l1(120), l2(80);

    Length total = l1.add(l2);

    total.show();

    return 0;
}
