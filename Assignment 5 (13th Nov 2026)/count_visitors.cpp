
#include <iostream>
using namespace std;

class Visitor {
    static int count;

public:
    Visitor() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

int Visitor::count = 0;

int main() {
    Visitor v1, v2, v3, v4;

    cout << "Total visitors = " << Visitor::getCount();

    return 0;
}
