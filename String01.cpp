/* 复制 字符长度 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    char data[] = "hahahaha";

    int len = strlen(data);     //strlen函数返回字符有效长度  8
    len = sizeof(data);         //sizeof函数返回字符真实长度  9

    char mudata[10];
    strcpy(mudata,data);        //拷贝字符 strcpy(目标字符，源字符)

    char mndata[10];
    strncpy(data,mndata,2);     //拷贝字符指定个数  strncpy(目标字符，源字符，字符个数)
    mndata[2] = '\0';   //需要设置拷贝字符的终止

    return 0;
}
/* strlen() 字符串长度
 * strcpy() strncpy() 拷贝字符串
 * strcmp() strncmp() 字符串比较
 * strcat() strncat() 字符串追加
 * strchr() 查找字符串第一次出现的位置
 * strstr() 查找字符在字符串中第一次出现的位置
 * strtok() 字符串切割
 * atio atol atof
 */