#include <stdio.h>

double Rec(double x);


double Rec(double x)
{
    if (x)
    {
        /* code */
        return 1/x;
    }
    else
    {   
        printf("Divided by zero!\n");
        return 0;
    }
    
}

int main()
{
    double x, y;
    scanf("%lg", &x);
    y = Rec(x);
    printf("%g\n", y);
    return 0;
}