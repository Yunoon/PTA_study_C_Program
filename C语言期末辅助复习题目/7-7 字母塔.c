#include<stdio.h>
#include <math.h>
int main()
{   
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 0; j < n-i; j++)
        {
            /* code */
            printf(" ");
        }
        int t=65;
        for (int k = 0; k < i; k++)
        {
            /* code */
            printf("%c",t++);
        }
        t -=1;
        for (int k = 0; k < i-1; k++)
        {
            /* code */
            printf("%c",--t);
        }
        printf("\n");
        
    }

    return 0;
}
