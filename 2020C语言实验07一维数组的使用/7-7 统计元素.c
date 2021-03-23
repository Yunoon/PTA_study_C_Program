#include <stdio.h>

int main()
{
    int a[10];
    int zhen=0,fu=0,lin=0;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        if (a[i]>0)
        {
            /* code */
            zhen++;
        }
        else if (a[i] == 0)
        {
            /* code */
            lin++;
        }
        else if (a[i] < 0)
        {
            /* code */
            fu++;
        }
        
        
        
    }
    printf("positive number = %d\nnegative number = %d\nzero = %d",zhen,fu,lin);
    
    
    
}