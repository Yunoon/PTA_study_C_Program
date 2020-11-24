#include <stdio.h>

int main()
{
    int a[10000]={0},c[10000]={0};
    int b,count=0;
    scanf("%d",&b);
    for (int i = 0; i < b; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        if (a[i]%2 ==0)
        {
            /* code */
            c[count] = a[i];
            count++;
        }
        
    }
    printf("%d\n",count);
    if (count !=0)
    {
        /* code */
        printf("%d",c[0]);
        for (int i = 1; i < count; i++)
        {
            /* code */
            printf(" %d",c[i]);
        }
    }
    
    
    
    
}