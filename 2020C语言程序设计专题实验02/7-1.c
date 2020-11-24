#include <stdio.h>
/*用了自定义函数

*/

int pd(int a)//简单的取余，取值,前面写过这个取数逻辑的
{//核心是 temp=a%10,a/=10
    int j,k;
    j = a%10;
    a /= 10;
    k = a%10;
    if (j < k)
    {
        /* code */
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}

int main()
{
    int a=0,b=0;
    int sum=0;
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        /* code */
        if (pd(i))
        {
            /* code */
            sum += i;
        }
        
        
    }
    printf("%d",sum);
    
}