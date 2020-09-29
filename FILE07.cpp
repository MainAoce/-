/* 文件指针 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

/* 写 */
void Write(void)
{
    char data[] = "hello wold";
    FILE * fp = fopen("z.txt","w");
    if(!fp)
        return;
    fputs(data,fp);
    fclose(fp);
    return;
}
/* 读 */
void Read(void)
{
    FILE * fp = fopen("z.txt","r");
    fseek(fp,6,SEEK_CUR);   //从文件开始向后移动6个位置，开始读取   也可以从文件末尾开始移动，参数为负值
    char ch;
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return;
}

int main(void)
{
    Write();
    Read();
    return 0;
}
/* feeks() 文件流 移动字节 模式
 * 模式：以SEEK_SET 以文件开头为标准
 *       以SEEK_CUR 以光标当前位置为标准
 *       以SEEK_END 以文件结尾为标准
 * ftell(文件流)       获取光标当前位置
 * rewind(文件流)      重置光标到文件开始位置
 */      