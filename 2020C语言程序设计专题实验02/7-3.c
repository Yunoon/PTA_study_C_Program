#include <stdio.h>
/*注意数组的范围是10000,算法如下*/
int main()
{
    int a[10000]={0},c[10000]={0};
    int b,count=0;
    scanf("%d",&b);
    for (int i = 0; i < b; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        if (a[i]%2 ==0)
        {
            /* code */
            c[count] = a[i];//如果有结果则给第二个数组赋值，下标从0开始
            count++;//0已经定义过了，所以在赋值过后再+1
        }
        
    }
    printf("%d\n",count);
    if (count !=0)
    {
        /* code */
        printf("%d",c[0]);
        for (int i = 1; i < count; i++)
        {
            /* code */
            printf(" %d",c[i]);
        }
    }
    
    
    
    
}