#include <stdio.h>

int main()
{
    int a[100],n;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        
        if (i == 1)//进行一次预输出
        {
            /* code */
            printf("%d",a[i]);
        }
        
        else if (i%2 == 1)
        {
            /* code */
            printf(",%d",a[i]);
        }
        
    }
    
    
    
}