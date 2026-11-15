#include <iostream>
using namespace std;

class Marks {
    int value;

public:
    Marks(int v = 0) {
        value = v;
    }

    void add(Marks a, Marks b) {
        value = a.value + b.value;
    }

    void show() {
        cout << "Total marks = " << value << endl;
    }
};

int main() {
    Marks m1(40), m2(35), total;

    total.add(m1, m2);

    total.show();

    return 0;
}
