#include <stdio.h>

double Cube(double x);

double Cube(double x)
{
    return x*x*x;
}

int main()
{
    double a, b;
    scanf("%lg", &a);
    b = Cube(a);
    printf("%g\n", b);
    return 0;
}
