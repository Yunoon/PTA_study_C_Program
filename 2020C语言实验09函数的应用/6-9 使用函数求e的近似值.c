#include <stdio.h>

double fact( int n );

double fact(int n)//递归
{
    if(n==0||n==1)
        return 1;
    else 
        return n*fact(n-1);
}

int main(void)
{    
    int i, n;
    double sum; 

    scanf("%d", &n);
    sum = 1;
    for(i = 1; i <= n; i++){
        sum = sum + 1.0/fact(i); 
     }
     printf("%f\n", sum);

    return 0;
}
