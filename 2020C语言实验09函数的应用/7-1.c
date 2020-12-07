#include <stdio.h>

int isprime(int n);

int isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        /* code */
        if (n%i == 0)
        {
            /* code */
            return 0;
        }
        else
        {
            return 1;
        }
        
        
    }
    
}

int main(void)
{    
    int i, n;
    double sum; 

    scanf("%d", &n);
    printf("%d",isprime(n));

    return 0;
}
