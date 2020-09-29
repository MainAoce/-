/* 切割字符串 */
#include<stdio.h>
#include<string.h>

int main(void)
{
    char data[] = "www.itcast.cn";
    char* p = strtok(data,".");         // 切割字符串，将点用\0表示 会破坏原始字符内容

    return 0;
}