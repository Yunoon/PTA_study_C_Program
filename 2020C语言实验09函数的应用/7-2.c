#include <stdio.h>
#include <math.h>

double fd(double a)
{   
    float x=a,y=0;
    if (x <= -2)
    {
        /* code */
        printf("y=%lf\n",y=-exp(2*x+1)+3);//exp(x)是求e的x次方的函数
    }
    else if (x>-2 && x<=3)
    {
        /* code */
        printf("y=%lf\n",y=2*x-1);
    }
    else if (x > 3)
    {
        /* code */
        printf("y=%lf\n",2*log10(3*x+5)-11);//log10是一个函数
    }
        
}

int main()
{    
    double a;

    scanf("%lf",&a);
    fd(a);

    return 0;
}
