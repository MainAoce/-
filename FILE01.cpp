/* cat 读取文件 */
// 思路：fopen -> fgetc -> fclose
#include<stdlib.h>
#include<stdio.h>

char ch;

int main(void)
{
    FILE *fp = fopen("z.txt","r");  //读的方式打开指定文件
    if(!fp)      //如果读取失败返回-1
        return -1;
    while((ch = fgetc(fp)) != EOF)  //ch连续读取，文件结束标志是EOF
        printf("%c",ch);
    fclose(fp); //关闭读取
    return 0;
}
/* fopen(文件路径，模式)
 * 关闭文件 fclose(文件指针)
 * 字符读写：fgetc fputc
 * 行读写：fgets fputs(stdin stdout stderr)
 * 块读写：fread fwrite
 * 
 * 文件光标操作：
 *      fseek ftell rewind
 * 文件操作：
 *      文件重命名 rename
 *      文件删除   remove
 * 文件缓存区操作：
 *      fflush
 * 
 *  */