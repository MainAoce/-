#include<stdio.h>
#include<stdlib.h>

enum colors
{
    blue,
    red,
    yellow
};

int main(void)
{
    colors c1 = red;
    
    switch(c1)
    {
        case blue:
        printf("蓝色");break;
        case yellow:
        printf("黄色");break;
        case red:
        printf("红色");break;
        default:
        printf("其他颜色");break;
    }

    return 0;
}