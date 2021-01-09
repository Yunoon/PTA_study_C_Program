#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char u[85][85];
    scanf("%d",&n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        /* code */
        
        char t[85]={0};
        // fflush(stdin);
        gets(t);

        for (int j = 0; j < strlen(t); j++)
        {
            if(t[j]>=65 && t[j]<=90)
                t[j] += ' ';
        }
        for (int k = 0, count=0; k < strlen(t); k++)
        {

            if(t[k]==32)
                count=0;
            else
            {
                count++;
                if(count>4)
                {
                    t[k]='.';
                    int m=k+1;
                    while (t[m]!=32)
                    {
                        m++;
                        if(t[m]==0)
                            break;
                    }
                    int n=k;
                    while (t[n]!=0)
                    {
                        t[++n]=t[m++];
                    }
                    
                    
                    
                    count=0;
                }
                    
            }

        }
        for (int j = 0; j < 85; j++)
        {
            /* code */
            u[i][j] = t[j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%s\n",u[i]);
    }
    
     

    return 0;

}