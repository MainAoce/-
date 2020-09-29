/* 行读取文件 */
/* 思路：fopen-fgets-fclose */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main(void)
{
    // 行输出
    char data[] = "hello\nwold\n";
    FILE* fp = fopen("z.txt","w");
    if(!fp)
        return -1;
    fputs(data,fp);
    fclose(fp);

    // 行读取
    FILE * fs = fopen("z.txt","r");
    if(!fs)
        return -1;
    fgets(data,1024,fs);    //成功返回的是0, data是接收文件字符的变量，1024是一行最大占的内存，fs是流
    printf("%s\n",data);
    fclose(fs);

    return 0;
}