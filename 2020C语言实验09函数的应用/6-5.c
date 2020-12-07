#include <stdio.h>

const double pi = 3.1415926535897932384626;

double CircleArea(double radius);

double CircleArea(double radius)
{
    return pi*radius*radius;
}


int main()
{
    double r, a;
    scanf("%lg", &r);
    a = CircleArea(r);
    printf("%g\n", a);
    return 0;
}
