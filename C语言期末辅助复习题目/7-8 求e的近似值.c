#include<stdio.h>
#include <math.h>


double recursive(int n)
{
    if(n==1)
        return 1;
    else
    {
        return n*recursive(n-1);
    }
    
}

int main()
{   
    int n;
    scanf("%d",&n);
    double sum=1.0;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        sum += 1/(recursive(i)*1.0);
    }
    
    printf("%.8lf",sum);
    

    return 0;
}
