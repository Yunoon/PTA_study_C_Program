#include<stdio.h>
#include<math.h>



int main()
{
    int a[10];
    int n,temp=0;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for (int i = 1; i < n; i++)//选择排序
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (a[i] > a[j])
            {
                /* code */
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    printf("%d",a[0]);
    for (int i = 1; i < n; i++)
    {
        /* code */
        printf(" %d",a[i]);
    }
    
    
    
    
    



    return 0;
}