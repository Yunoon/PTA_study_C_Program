#include <stdio.h>
#include <math.h>



int chen(int i,int a)
{
    if (i==0)
    {
        /* code */
        return 1*a;
    }
    return pow(10,i)*a+chen(i-1,a);

}

int rp(n,a)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum += chen(i,a);
    }
    printf("%d\n",sum);
}

int main()
{
    int n=0,a=0;
    // scanf("%d %d",&n,&a);
    // rp(n,a);
    // for (int i = 0; i < 10000; i++)
    // {
    //     /* code */
    //     int n=0,a=0;
    //     scanf("%d %d",&n,&a);
    //     rp(n,a);

    // }
    while (scanf("%d %d",&n,&a)!=EOF)
    {
        /* code */
        rp(n,a);
    }

    
    return 0;
}