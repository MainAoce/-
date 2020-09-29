/* 指针实现冒泡排序 */
#include<stdio.h>
#include<stdlib.h>

void Bubble(int arr[],int len);     //地址的赋值和地址的运算要搞清楚

void  Bubble(int arr[],int len)
{
    int* p = arr;       // 对地址进行赋值
    for(int i = 0; i < len-1; i++)
    {
        for(int j = 0; j < len-i-1; j++)
        {
            if(*(p+j) < *(p+j-1))   //对地址进行运算
            {
                int temp = *(p+j);
                *(p+j) = *(p+j-1);
                *(p+j-1) = temp;
            }
        }
    }
    for(int i = 0; i < len; i++)
    {
        printf("%d\n",p[i-1]);
    }
    return;
}

int main(void)
{
    int arr[] = {1,2,7,4,8,6,3,5,9,10};
    Bubble(arr,10);

    return 0;
}