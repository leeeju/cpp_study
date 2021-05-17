//#include <stdio.h>

#include "data.h"

int main(void)
{   
       
    struct data today = {2014, 04, 16};
    
    struct data birthday;
    birthday. year = 2005;
    birthday. month = 8;
    birthday. day = 2;
    
    // struct dat d = today;
    // if (today == d)
    
    //printData(today);
    //printData(birthday);
    
    printData(&today);
    printData(&birthday);
    
    return 0;
}

2021.05.17 함수에 포인터를 사용하는 이유 3번 구조체 자료를 인자로 전달할때 오버해드를 줄이기 위해
#ifndef DATA_H
#define DATA_H

struct data {

    int year;
    int month;
    int day;
    
};

//void printData(struct data d);
void printData(const struct data *pd);

#endif

//////
#include <stdio.h>
#include "data.h"
/*
void printData(struct data d)
{

    printf("(%d/%d/%d)\n", d.year, d.month, d.day);

} */

void printData(const struct data *pd)
{
    printf("(%d/%d/%d)\n", (*pd). year, (*pd). month, (*pd). day);

} 

 
