#include <stdio.h>
#include <string.h>

char* StrCpy(char *dst, const char *src);

int main()
{
    char a[1024], b[1024], c[1024];
    gets(a);
    StrCpy(c, StrCpy(b, a));
    puts(a);
    puts(b);
    puts(c);
    return 0;
}

/* 你提交的代码将被嵌在这里 */
//方法一
char* StrCpy(char *dst, const char *src)
{   
    int i=0;
    char *t=src;
    char *m=src;
    for (i = 0; *m != '\0'; i++,m++)
    for (int g = 0; g<i; g++,src++,dst++)
    {

        *dst = *src;
    }
    return t;
}
//方法二
// char* StrCpy(char *dst, const char *src)
// {
// 	dst=strcpy(dst,src);
// 	return dst;
// }
//方法三（能过）
// char* StrCpy(char *dst, const char *src)
// {
//     int i;
//     while(src[i]!='\0'){
//         dst[i]=src[i];
//         i++;
//         }
//     dst[i]='\0';
//     return dst;
// }