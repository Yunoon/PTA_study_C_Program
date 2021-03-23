#include<stdio.h>

double e;

double funpi(double e)
{
    double pi=0,fenmu=1,sign=1;
    do
    {
        pi=pi+sign/fenmu;
        fenmu+=2;
        sign=sign*(-1.0);
    }while(1/(fenmu-2)>=e);
    
    return pi;
}

int main()
{
    double e,pi;
    scanf("%lf",&e);
    pi = funpi(e);
    printf("pi = %.6f",4*pi);
    return 0;
}
