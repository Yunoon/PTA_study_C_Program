#include <stdio.h>

int main()
{
    int a[10];


    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        if (a[i]>max)
        {
            /* code */
            max = a[i];
        }
        if (a[i]<min)
        {
            /* code */
            min = a[i];
        }
    }
    printf("difference value = %d",max-min);
        
    return 0;
}
