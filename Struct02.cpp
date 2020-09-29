/* 结构体数组 */
#include<stdio.h>
#include<stdlib.h>
#include<string>

struct student
{
    int age;
    char name[20];
};

int main(void)
{
    student stu[2];
    for(int i=0; i<2; i++)
    {
        scanf("%s %d", &stu[i].name, &stu[i].age);
        printf("%s,%d\n",stu[i].name,stu[i].age);
    }
    return 0;
}