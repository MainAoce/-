#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char data1[] = "100";
    char data2[] = "3.1415926";

    int i = atoi(data1);        //将字符串转成整形
    float f = atof(data2);      //将字符串转成浮点型，也可以用double接收
    double d = atof(data2);

    //从字符的非空开始到数字结尾，后面有字符不会读取
    printf("%d\n%f\n%f",i,f,d);
    return 0;
}