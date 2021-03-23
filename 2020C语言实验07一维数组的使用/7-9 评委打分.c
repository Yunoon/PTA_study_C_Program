#include <stdio.h>
//
int main()
{
    int a[11];
    int n,core;
    for (int i = 1; i <= 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        scanf("%d",&core);
        a[core] += 10;
    }
    
    printf("%d",a[1]);
    for (int i = 2; i <= 10; i++)
    {
        /* code */
        printf(" %d",a[i]);
    }
    
    
    
}