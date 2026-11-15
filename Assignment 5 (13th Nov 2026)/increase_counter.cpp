#include <iostream>
using namespace std;

class Counter {
    public:
    int value;

     Counter() {
    value = 0;
     }

};
void increase(Counter &c)  {
    c.value++;
}
int main() {
    Counter c1;
     
    increase(c1);
    increase(c1);
    increase(c1);

    cout << "Value = " << c1.value << endl;

    return 0;

}
