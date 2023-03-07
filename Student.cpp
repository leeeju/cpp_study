#include "Student.h"

Student::Student(void)
{
    num = 0;
    name = "";
}
Student::Student(int _num)
{
    num = _num;
    name = "";
}
Student::Student(int _num,string _name)
{
    num = _num;
    name = _name;
}
void Student::View()
{
    if(num)
    {
        cout<<"번호:"<<num;
    }
    else
    {
        cout<<"번호:N/A";
    }
    if(name != "")
    {
        cout<<" 이름:"<<name<<endl;
    }
    else
    {
        cout<<" 이름:NA"<<endl;
    }
}