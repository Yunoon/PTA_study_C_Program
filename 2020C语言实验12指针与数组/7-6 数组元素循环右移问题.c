#include<stdio.h>
int main(void)
{
    int a[100];
    int n,t;
    int b[100];


    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        b[(i+t)%n] = a[i];
    }
    printf("%d",b[0]);
    for (int i = 1; i < n; i++)
    {
        /* code */
        printf(" %d",b[i]);
    }
    
    
    
    return 0;


}