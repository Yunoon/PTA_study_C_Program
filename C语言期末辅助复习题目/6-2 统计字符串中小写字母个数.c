#include <stdio.h>
#include <string.h>
int StringCount( char *s);
int main()
{
   char str[80] ;    
   gets(str);
   printf("There are %d lowercase letters" ,  StringCount(str ) );
  return 0;
}

/* 请在这里填写答案 */
int StringCount( char *s)
{
    int count=0;

    for (int i = 0; i < 30; i++,s++)
    {
        /* code */
        if(*s>=97 && *s<=122)
            count++;
    }

    return count;
}