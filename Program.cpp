#include "Student.h"
int main()
{
    Student *stu1 = new Student();
    Student *stu2 = new Student(3);
    Student *stu3 = new Student(3,"홍길동");

    stu1->View();
    stu2->View();
    stu3->View();

    delete stu1;
    delete stu2;
    delete stu3;

    return 0;
}