/* 格式化字符串 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(void)
{
    int num = 123;
    char st[] = "hello";
    char dest[20];

    sprintf(dest,"%s %d",st,num);       //将int 和 char 格式化放到dest中

    scanf(dest,"%s %d",st,&num);        //将dest 格式化放到 st 和 num中（1+2=3，可以写成  %d+%d=%d)

    return 0;
}
/* 字符格式化
*/