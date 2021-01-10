#include <stdio.h>
#include <string.h>

int main()
{
    double a[10];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%lf",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n-i-1; j++)
        {
            /* code */
            if(a[j]<a[j+1])
            {
                double temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }
    printf("%.2lf",a[0]);
    for (int i = 1; i < n; i++)
    {
        /* code */
        printf(" %.2lf",a[i]);
    }
    
    
    
    
    

}
