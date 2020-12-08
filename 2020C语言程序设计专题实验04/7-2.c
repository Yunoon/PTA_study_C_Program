#include<stdio.h>
#include<math.h>


int pd(int b)
{
    int a;
    a = b;
    int sum=0;
    int temp;
    while (a>0)
    {
        /* code */
        temp = a %10;
        sum += (int)pow(temp,3);
        a /= 10;
    }
    if (sum == b)
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
    int a;
    scanf("%d",&a);
    for (int i = 100; i < a; i++)
    {
        /* code */
        if (pd(i))
        {
            /* code */
            printf("%d ",i);
        }
        
    }
    
    

    return 0;
}