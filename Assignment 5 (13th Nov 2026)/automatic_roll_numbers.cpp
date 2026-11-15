
#include <iostream>
using namespace std;

class Student {
    string name;
    int rollNo;

    static int nextRoll;

public:
    Student(string n) {
        name = n;
        rollNo = nextRoll;
        nextRoll++;
    }

    void display() {
        cout << "Roll " << rollNo << ": " << name << endl;
    }
};

// Initializing static variable
int Student::nextRoll = 1;

int main() {
    Student s1("Aamir");
    Student s2("Sana");
    Student s3("Iqra");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
