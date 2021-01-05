#include <stdio.h>
# include <string.h>
# define MAXLINE 80
void encrypt ( char *s);
int main (void)
{
   char line [MAXLINE];

   gets(line);
   encrypt (line);
   printf ("%s\n", line);
     return 0;
}


/* 请在这里填写答案 */

void encrypt ( char *s)
{   
    int len=0;
    len = strlen(s);
    for (int i = 0; i < len; i++,s++)
    {
        /* code */
        if(*s==122)
            *s=97;
        else
        {
            *s += 1;
        }
        
    }
    
}