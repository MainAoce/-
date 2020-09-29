/* 随机生成两位数乘法 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    srand((unsigned int)time(NULL));
    while(true)
    {
        int a = rand()%11;
        int b = rand()%11;
        int c;
        printf("  %d * %d = \n",a,b);
        scanf("  %d",&c);
        if(c != a*b)
        {
            return 0;
        }
        system("cls");
    }
    return 0;
}