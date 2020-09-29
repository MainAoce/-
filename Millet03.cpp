/* 通过指针改变Const修饰的变量 */
#include<stdio.h>
#include<stdlib.h>

#define LV 100      //改变常量的地址，使指针不容易找到

int main(void)
{
    // const 修饰变量不安全
    const int a = 10;
    int* p = &a;
    *p = 100;
    printf("%d\n",a);


    return 0;
}