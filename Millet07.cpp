/* 指针传递数组 */
#include<stdio.h>
#include<stdlib.h>

void Print01(int* arr,int len);     //指针传递数组，必须传递首地址和数组长度
void Print02(int* arr);             //字符串数组，传递首地址

void Print01(int* arr,int len)
{
    for(int i = 0; i < len; i++)    //如果是 sizeof(arr) 是sizeof(int*) 值永远为 4
    printf("%d\n",arr[i]);
    return;
}

void Print02(char* arr)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        printf("%s\n",arr[i]);
        i++;
    }
    return;
}

int main(void)
{
    int arr[] = {1,2,3,4,5,6};
    Print01(arr,sizeof(arr) / sizeof(arr[0]));

    char arr02[] = "hello wold";
    Print02(arr);

    return 0;
}