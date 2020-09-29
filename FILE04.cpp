/* 二进制文件读写 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main(void)
{
    FILE * fp = fopen("zz.txt","wb");
    if(!fp)
        return -1;
    char data[] = "hello wold";
    fwrite(data,sizeof(char),10,fp);    // 写入的字符 块大小 块数 流
    fclose(fp);

    FILE * fr = fopen("zz.txt","rb"); 
    if(!fr)
        return -1;
    char data1[10];
    fread(data1,1,16,fr);
    fclose(fr);
    printf("%c",data1[0]);


    return 0;
}