/* 生成100道四则运算题 */
// 思路：fopen - for循环 - sprintf格式化 - fputc - fclose
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(void)
{
    //数据
    srand((unsigned int)time(NULL));
    int a, b;
    char c;
    char buf[20];

    FILE *fp = fopen("z.txt","w");
    if(!fp)
        return -1;
    for(int i = 0; i < 100; i++)
    {
        switch(rand() % 4)
        {
            case 0:
            c = '+';break;
            case 1:
            c = '-';break;
            case 2:
            c = '*';break;
            case 3:
            c = '/';break;
        }
        a = rand()%100 + 1;
        b = rand()%100 + 1;
        sprintf(buf,"%d%c%d=\n",a,c,b);
        int j = 0;
        while(buf[j] != '\0')
        {
            fputc(buf[j],fp);
            j++;
        }
    }
    fclose(fp);
    return 0;
}