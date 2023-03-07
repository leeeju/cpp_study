//#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
    int num;
    string name;
public:
    //생성자 중복 정의
    Student(void);
    Student(int num);
    Student(int num,string name);
    void View();
};