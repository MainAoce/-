/* 格式化 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(void)
{
    char a[] = "早上好";
    char b[] = "吃了没";
    char c[] = "晚上好";

/* 字符串标准输入输出 */
    scanf("%c",a);
    printf("%c",b);

/* 字符串格式化输入输出 */
    scanf(c,"%a%b",a,b);        // 拆分一个字符串到另外两个字符
    sprintf(a,"%c%b",c,b);      // 把另外两个字符合并成一个字符

/* 文件格式化输入输出 */
    FILE* fp = fopen("z.txt","r");
    fscanf(fp,"%c",a);
    fprintf(fp,"%c",b);
    fclose(fp);

    return 0;
}