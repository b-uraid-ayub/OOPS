
#include <iostream>
using namespace std;
322
class Temperature
{
    double celsius;

public:
    void input()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    double toFahrenheit()
    {
        return (celsius * 9 / 5) + 32;
    }

    void display()
    {
        cout << celsius << " Celsius = "
             << toFahrenheit() << " Fahrenheit" << endl;
    }
};

int main()
{
    Temperature t;

    t.input();
    t.display();

    return 0;
}
