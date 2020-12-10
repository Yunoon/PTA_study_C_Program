#include<stdio.h>
#include<math.h>


int main()
{   
    int a[10]={0};

    int max=a[0],cmax=a[0];
    
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)//第一次取出最大值
    {
        /* code */
        if (a[i] > max)
        {
            /* code */
            max = a[i];
        }
        
    }
    for (int i = 0; i < 10; i++)//第二次取出小于最大值的次最大值
    {
        /* code */
        if ((a[i]> cmax) && a[i]<max)
        {
            /* code */
            cmax = a[i];
        }
    }
    
    printf("max=%d,cmax=%d",max,cmax);
    
    
    

    return 0;
}