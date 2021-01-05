#include <stdio.h>
#include <string.h>



double Sign(double a)
{
    if (a>0)
    {
        /* code */
        printf("1");
    }
    else if (a==0)
    {
        /* code */
        printf("0");
    }
    else if(a<0)
    {
        printf("-1");
    }
}


int main( )

{ 
    double a;

    scanf("%lf",&a);
    Sign(a);
    
    
    
}