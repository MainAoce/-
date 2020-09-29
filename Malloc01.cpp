/* Malloc分配动态内存 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max 10

int main(void)
{
    srand((unsigned int)time(NULL));
    int* p = (int*)malloc(sizeof(int)*Max);
    for(int i = 0; i < Max; i++)
    {
        p[i] = rand()%50;
    }
    for(int i = 0; i < Max; i++)
    {
        printf("%d\n",*(p+i));
    }
    free(p);


    return 0;
}