/* 指针作形参 */
#include<stdio.h>
#include<stdlib.h>

void Change(int* a);        // 通过指针接收变量地址，可以在其他函数中修改变量的值

void Change(int* a)
{
    *a = 10;
    return;
}

int main(void)
{
    int b = 2;
    Change(&b);
    printf("%d\n",b);
}