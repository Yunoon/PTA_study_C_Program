#include <stdio.h>

int main()
{
    int a[10];
    int n;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    int min=a[0],min_xb=0,temp,temp_1;
    for (int i = 1; i < n; i++)
    {
        if (a[i]<min)
        {
            /* code */
            min = a[i];
            min_xb = i;
        }
        
    }

    temp = a[min_xb];
    a[min_xb] = a[0];
    a[0] = temp;
    
    int max=a[0],max_xb=0;
    for (int i = 1; i < n; i++)
    {
        if (a[i]>max)
        {
            /* code */
            max = a[i];
            max_xb = i;
        }

    }
    temp_1 = a[max_xb];
    a[max_xb] = a[n-1];
    a[n-1] = temp_1;

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
    // printf("\n%d %d",max_xb,min_xb);
    
    
    
}