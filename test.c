#include <stdio.h>

int main()
{  
    int n=0,m=0;
    int count=0;

    scanf("%d",&n);
    while (n>0)
    {
        /* code */
        m = n%10;
        if (m==4)
        {
            /* code */
            count++;
            n /= 10;
        }
        else
        {   
            n /= 10;
            continue;
        }
        
        
    }   

    printf("%d",count);
    
    return 0;

}