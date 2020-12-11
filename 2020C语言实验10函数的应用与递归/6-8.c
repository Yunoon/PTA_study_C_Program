#include <stdio.h>

int f( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int f( int n )
{
    if (n == 1 || n== 2)
    {
        /* code */
        return 1;
    }
    else if (n==0)
    {
        /* code */
        return 0;
    }
    
    return f(n-1)+f(n-2);
    
}