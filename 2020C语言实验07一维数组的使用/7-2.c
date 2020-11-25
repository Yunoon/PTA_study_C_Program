#include <stdio.h>

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    int max=a[0];//使用第一个值与后续的值比较，当后续值大于当前值时，后续值赋值给当前值
    for (int i = 1; i < 10; i++)
    {
        /* code */
        if (a[i]>max)
        {
            /* code */
            max = a[i];
        }
        
    }
    printf("%d",max);
    
    
}