#include <stdio.h>

int main()
{
    int a[10],n,m;

    scanf("%d",&n);
    for (int i = n-1; i >= 0; i--)//逆存放
    {
        /* code */
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    
    printf("%d",a[m]);
    
    
    
    
    
}