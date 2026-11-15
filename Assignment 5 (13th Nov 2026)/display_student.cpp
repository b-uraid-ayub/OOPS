

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

void display(Student s) {
    cout << "Name: " << s.name
         << ", Marks: " << s.marks << endl;
}

int main() {
    Student s1;

    s1.name = "Sana";
    s1.marks = 91;

    display(s1);

    return 0;
}
