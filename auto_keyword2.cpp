#include <iostream>

using namespace std;

int plusNum(int i) {
    return i + 1;
}
int main() {
    auto a = true;
    auto b = 'Y';
    auto c = L'Y';
    auto d = "문자열";
    auto e = 26;
    auto f = 3.12;
    auto g = 10000000000;

    auto &h = e;//참조
    auto *i = &e;//포인터

    cout << "값\t\t크기\t\t자료형" << endl;
    cout << a << "\t\t" << sizeof(a) << "\t\t" << typeid(a).name() << endl;
    cout << b << "\t\t" << sizeof(b) << "\t\t" << typeid(b).name() << endl;
    cout << c << "\t\t" << sizeof(c) << "\t\t" << typeid(c).name() << endl;
    cout << d << "\t\t" << sizeof(d) << "\t\t" << typeid(d).name() << endl;
    cout << e << "\t\t" << sizeof(e) << "\t\t" << typeid(e).name() << endl;
    cout << f << "\t\t" << sizeof(f) << "\t\t" << typeid(f).name() << endl;
    cout << g << "\t" << sizeof(g) << "\t\t" << typeid(g).name() << endl;

    auto j = plusNum;// 함수 포인터
    cout << j(3) << endl;

    auto printme = [] {cout << "hello" << endl; };// 매개변수 없는 함수, Lambda
    printme();

    auto plus2 = [](int i) {return i + 1; };//매개변수 있는 함수, Lambda
    cout << plus2(3) << endl;

    int count = 0;
    auto k = [&](int i) {count += i; };//함수 자체(함수 내부에서 외부 변수 참조 시 & 대입), Lambda

    auto l = [](int *i)->int& {return *i; };// 함수 자체(참조자를 리턴하려는 경우), Lambda

}

