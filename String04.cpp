#include<stdio.h>
#include<string.h>

int main(void)
{
    char data[] = "hello";
    
    char* p = strchr(data,'l');     // 返回字符第一次出现的位置 返回的是llo
    printf("%s",p);

    char* q = strstr(data,"llo");     //返回字符串第一次出现的地址
    printf("%s",q);

    return 0;
}