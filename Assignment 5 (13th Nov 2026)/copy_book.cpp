#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
    string title;
    int price;

Book(string t, int p) {
    title = t;
    price = p;

}
void show() {
    cout << " Title: " << title << endl;
    cout << " Price: "<< price << endl;

}
};
int main(){
    Book b1 = Book("C++ Programming", 450);
    Book b2 = b1;
    b1.show();
    b2.show();
    return 0;
}
