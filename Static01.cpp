/* static 静态变量 */
#include<stdio.h>
#include<stdlib.h>

void Fun()
{
    static int i = 10;     //static 修饰的变量只能定义一次  所以该代码只执行一次 （内存在堆中分配）
    printf("%d\n",i++);
}

int main(void)
{
    for(int i = 0; i < 10; i++)
        Fun();

    return 0;
}