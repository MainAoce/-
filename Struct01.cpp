/* 结构体的三种定义方式 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct Human        //结构体的成员排列不同，占的内存不同，一般按数据类型占的大小从大到小排列，double最大，这样可以节省内存
{                   // 这与结构体的内存结构有关，按最大的分配内存存储方格的大小
    char name[21];
    int age;
};

int main(void)
{
    struct Human Aoce = {"Aoce",23};

    struct Human aoce = {.name="aoce",.age=23};

    struct Human xgk;
    strcpy(xgk.name, "谢广坤");

    return 0;
}