#include <iostream>

using namespace std;

class A {
    int num;
public:
    void print_This() {
        cout << "Class A의 this 주소 : " << this << endl;
    }

    A * return_A() {
        return this;
    }
};

int main(void) {

    A a;

    cout << "a의 주소값 : " << &a << endl;
    a.print_This();

    cout << "a.return_A() : " << a.return_A() << endl;

    return 0;
}