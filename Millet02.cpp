#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int arr[] = {0,1,2,3,4};

    void* p = arr;
    *((int*)p + 1) = 10;    //通过指针位置的改变，修改数组指定位置的值 
    printf("%d\n",arr[1]);

    return 0;
}