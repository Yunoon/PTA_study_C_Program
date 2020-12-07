#include <stdio.h>
#include <math.h>

int isprime(int n)
{
    int ret=0;
    for (int i = 2; i < n; i++)
    {
        /* code */
        
        if (n%i == 0)
        {
            /* code */
            ret=0;
            break;
        }
        else
        {
            ret=1;
        }   
    }
    return ret;
}

int fd(int a)
{   
    int count_i=0,count_j=0;

    for (int i = 1; i < 10000000; i++)//这里需要将范围调大一点
    {
        /* code */
        if (isprime(a+i) && isprime(a+i+2))
        {
            printf("%d %d\n",a+i,a+i+2);
            break;
        }
    }   
}

int main()
{    
    int a,b;
    int num=0;
    scanf("%d",&a);
    b =a;
    while (a)
    {
        /* code */
        num++;
        a/=10;
    }
    if (num <=7)
    {
        /* code */
        fd(b);
    }
    if (num > 7)
    {
        /* code */
        printf("False");
    }
    
    

    return 0;
}
