/* 文件重命名、删除 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

/* 新建文件 */
void Document(void)
{
    FILE * fp = fopen("b.txt","w");
    if(!fp)
        return;
    fclose(fp);
    printf("新建文件成功\n");
    return;
}

/* 删除文件 */
void Del_do(void)
{
    if(!remove("c.txt"))    //成功返回0 失败返回-1
        printf("删除文件成功\n");
    return;
}
/* 重命名文件 */
void Re_name(void)
{
    if(!rename("b.txt","c.txt"))
        printf("重命名成功\n");
    return;
}

int main(void)
{
    Document();
    Re_name();
    Del_do();
    return 0;
}