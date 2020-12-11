#include <stdio.h>
//根据他给的判断语句照着敲，不要理解
int Ack( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));

    return 0;
}

int Ack( int m, int n )
{
    if (m==0)
    {
        /* code */
        return n+1;
    }
    else if (n==0 && m>0)
    {
        /* code */
        Ack(m-1,1);
    }
    else if (m>0 && n>0)
    {
        /* code */
        Ack(m-1,Ack(m,n-1));
    }
    
    
    
}