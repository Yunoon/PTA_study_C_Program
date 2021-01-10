#include <stdio.h>
#include <string.h>

int main()
{
    int a[100];
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);  
    }
    for (int i = n-1; i >=0; i--)
    {
        /* code */
        printf("%d ",a[i]);
    }
    
    

}
