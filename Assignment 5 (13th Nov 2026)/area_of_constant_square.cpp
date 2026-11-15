#include <iostream>
using namespace std;

class Square {
    int side;

public:
    Square(int s) {
        side = s;
    }

    int area() const {
        return side * side;
    }
};

int main() {
    const Square sq(6);

    cout << "Area = " << sq.area() << endl;

    return 0;
}
