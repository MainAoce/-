/* 结构体和指针 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct student
{
    char* name;
    int age;
};

int main(void)
{
    struct student aoce;
    aoce.name = (char*)malloc(sizeof(char)*21);
    strcpy(aoce.name,"Aoce");
    printf("%s",aoce.name);
    free(aoce.name);

    struct student* p = &aoce;
    p->age = 23;

    return 0;
}