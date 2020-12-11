#include <stdio.h>


/*凡人理解迭代，神理解递归，不要理解，直接学着用就好*/

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