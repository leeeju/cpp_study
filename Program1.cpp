#include <iostream>
using namespace std;

//개발자가 복사 생성자를 정의하지 않음 - 디폴트 복사 생성자가 만들어짐
class DCArray
{
    int *base;
    int bcapacity;
    int usage;
public:
    DCArray(int _capa)
    {
        bcapacity = _capa;
        base = new int[bcapacity];          //bcapacity개수의 int 형식을 동적으로 생성
        usage = 0;
    }
    ~DCArray()
    {
        delete[] base;                      //동저으로 생성한 저장소 소멸(new []로 생성한 것은 delete[]로 소멸)
    }
    void PushBack(int data)
    {
        if(usage<bcapacity)                 //꽉 차지 않았을 때
        {
            base[usage] = data;
            usage++;                        //보관 개수 1 증가
        }
    }
    void List()
    {
        for(int i = 0; i<usage;i++)
        {
            cout<<base[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    DCArray dcarr1(10);       //저장소의 크기가 10인 동적 배열 선언
    dcarr1.PushBack(4);       //순차 보관
    DCArray dcarr2(dcarr1);   //복사 생성으로 동적 배열 선언
    dcarr1.List();
    dcarr2.List();
    dcarr1.PushBack(9);
    dcarr2.PushBack(6);
    dcarr1.List();
    dcarr2.List();
    return 0;
}