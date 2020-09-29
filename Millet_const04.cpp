#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    int a = 1, b = 2;
    const int* p = &a;
    // *p = 3; error        const修饰int*ls，指针不能改变变量的值
    p = &b;                //但是可以改变指针指向的位置

    int* const q = &a;
    *q = 3;                 //const修饰指针变量，指针可以改变变量的值
    //q = &b;  error        不能改变指针的位置

    const int* const n = &a;    //指针的指向不能变，也不能修改变量的值


    return 0;
}