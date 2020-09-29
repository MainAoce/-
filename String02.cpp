/* 合并字符 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    char data[11] = "hello";
    char data2[] = "wold";

    strcat(data,data2);         //把字符2添加到字符1的末尾

    strcmp(data,data2);         //比较两个字符的ASCII码的大小，返回值 等于0，大于0，小于0   后面可添加比较字符的个数
                                //有的操作系统返回ASCII码的差值
    return 0;
}