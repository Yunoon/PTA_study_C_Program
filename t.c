#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *biao[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{   
    char n[50]={'\000'};

    
    gets(n);
    if(n[0]==45)
    {
        printf("fu ");
        for (int i = 1; n[i]!=0; i++)
        {
            /* code */
            // printf("%c",n[i]); 
            char t = n[i];
            int g = t - '0';
            printf("%s ",biao[g]);
        }
        
    }
    

    return 0;
}