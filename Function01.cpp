#include<stdio.h>
#include<stdlib.h>

void Bubble(int arr[],int len);         //  冒泡排序的函数方法

void  Bubble(int arr[],int len)
{
    for(int i = 0; i < len-1; i++)
    {
        for(int j = 0; j < len-i-1; j++)
        {
            if(arr[j] < arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    for(int i = 0; i < len; i++)
    {
        printf("%d\n",arr[i-1]);
    }
    return;
}

int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    Bubble(arr,10);

    return 0;
}