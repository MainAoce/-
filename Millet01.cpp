#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a = 10;
    void* p = &a;
    *(int*)p = 100;       //将void*指针转化成 int* 类型
    printf("%d",a);

    return 0;
}