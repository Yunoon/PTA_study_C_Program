#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int sum(int n)
{
    if (n==1)
    {
        /* code */
        return 1;
    }
    else if (n<1)
    {
        /* code */
        return 0;
    }
    
    return n+sum(n-1);
}