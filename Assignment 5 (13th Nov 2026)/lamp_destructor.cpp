#include <iostream>
using namespace std;

class Lamp {
public:
    
    Lamp() {              // Constructor
     cout << "Lamp ON" << endl;
    }

     ~Lamp() {          // Destructor
        cout << "Lamp OFF" << endl;
    }
};

int main() {
    Lamp l1;

    cout << "Reading a book" << endl;

    return 0;
}
