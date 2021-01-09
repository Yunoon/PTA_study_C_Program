#include  <stdio.h>
unsigned int  MyStrlen(const char str[]);

int main()
{
    char   a[80]; unsigned int len;
    gets(a);
    len=MyStrlen(a);
    printf("%u\n", len);
    return 0;
}

/*在此实现MyStrlen函数*/
unsigned int  MyStrlen(const char str[])
{
    int i=0;
    while (str[i]!=0)
    {
        /* code */
        i++;
    }
    
    return i;
}