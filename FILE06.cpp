/* 拷贝视频文件 */
/* 在cmd中用gcc -v file06.cpp编译，然后 a wow.mp4 wow01.mp4 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    unsigned int start_time = time(NULL);
    if (argc < 3)
    {
        printf("缺少参数\n");
        return -1;
    }
    FILE * fp1 = fopen(argv[1],"rb");
    FILE * fp2 = fopen(argv[2],"wb");
    if(!fp1 || !fp2)
    {
        printf("文件操作失败\n");
        return -2;    
    }
    char ch;
    while(!feof(fp1))
    {
        ch = fgetc(fp1);
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    unsigned int end_time = time(NULL);
    printf("所用时间：%d",end_time - start_time);
    return 0;
}
