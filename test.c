#include <stdio.h>
//可以用循环专题的7-4递归做法，这里使用另外的做法
int main()
{
    int a[50]={1,1};
    int n;
    scanf("%d",&n);
    if (n>=1 && n <=46)
    {
        /* code */
        for (int i = 2; i < n; i++)
        {
            /* code */
            a[i] = a[i-1]+a[i-2];//
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            printf("%11d",a[i]);
            if ((i+1)%5==0)
            {
                /* code */
                printf("\n");
            }
            
        }

    }
    else
    {
        printf("Invalid.");
    }
    
    
    
}