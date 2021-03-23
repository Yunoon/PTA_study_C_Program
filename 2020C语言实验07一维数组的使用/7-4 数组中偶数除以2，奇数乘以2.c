#include <stdio.h>

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        if (a[i]%2==0)//判断偶数
        {
            /* code */
            a[i] /= 2;
        }
        else if (a[i]%2 == 1)//判断奇数
        {
            /* code */
            a[i] *= 2;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%4d",a[i]);
    }
    
    
    
    
}