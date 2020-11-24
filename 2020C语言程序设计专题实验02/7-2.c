#include <stdio.h>

int main()
{
    int a[3]={0};
    int sum=0;
    printf("请输入三个整数。");
    for (int i = 0; i < 3; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    if (a[0]<a[1] && a[0]< a[2])
    {
        /* code */
        printf("\n其中的最小值为%d。",a[0]);
    }
    else if (a[1] < a[0] && a[1] < a[2])
    {
        /* code */
        printf("\n其中的最小值为%d。",a[1]);
    }
    else
    {
        printf("\n其中的最小值为%d。",a[2]);
    }
    
    
    
    
}