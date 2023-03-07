#include<iostream>
#include<vector>
#include<string>
using namespace std;
 
int main(void)
{
    auto a = 10;
    auto b = "BlockDMask";
    auto c = 'c';
    auto d = 11.0f;
    vector<int> v = { 1, 2, 3, 4, 5 };
    class Student {
        string name;
        int score;
    };
 
    cout << "sizeof(x)\t|x\t\t\t|typeid(x).name()\n" <<endl;        
    cout << sizeof(a) << "\t\t|" << a << "\t\t\t|" << typeid(a).name() << endl;
    cout << sizeof(b) << "\t\t|" << b << "\t\t|"   << typeid(b).name() << endl;
    cout << sizeof(c) << "\t\t|" << c << "\t\t\t|" << typeid(c).name() << endl;
    cout << sizeof(d) << "\t\t|" << d << "\t\t\t|" << typeid(d).name() << endl;
    cout << sizeof(v) << "\t\t|" << "vector" << "\t\t\t|" << typeid(v).name() << endl;
    cout << sizeof(Student) << "\t\t|" << "Class" << "\t\t\t|" << typeid(Student).name() << endl;
    return 0;
}

