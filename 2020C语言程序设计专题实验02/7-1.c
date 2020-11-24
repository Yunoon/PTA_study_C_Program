#include <stdio.h>


int pd(int a)
{
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