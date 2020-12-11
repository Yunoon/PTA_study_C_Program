#include <stdio.h>

int is( int number );
void count_sum( int a, int b );

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

/* 你的代码将被嵌在这里 */

int is( int num )
{
    int number =num;
    int sum=0;
    int temp;
    while (number>0)
    {
        /* code */
        temp = number%10;
        number /= 10;
        sum += temp;
    }
    return (sum == 5?1:0);
    
}
void count_sum( int a, int b )
{   

    int count=0,sum=0;
    for (int i = a; i <= b; i++)
    {
        /* code */
        if (is(i))
        {
            /* code */
            count++;
            sum +=i;
        }
        
    }
    printf("count = %d, sum = %d",count,sum);
}