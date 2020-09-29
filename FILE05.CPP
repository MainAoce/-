/* 结构体存入二进制文件 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

struct student
{
    char name[20];
    int age;
};

int main(void)
{
    struct student aoce = {"aoce",23};
    aoce.age = 23;
    FILE * fp = fopen("zz.txt","wb");
    if(!fp)
        return -1;
    fwrite(&aoce,sizeof(student),1,fp);    
    fclose(fp);



    return 0;
}