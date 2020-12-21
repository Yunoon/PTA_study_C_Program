#include <stdio.h>
#include <math.h>

void ToCoord(double *x, double *y, double r, double theta);

int main()
{
    double r, theta, x, y;
    scanf("%lg%lg", &r, &theta);
    ToCoord(&x, &y, r, theta);
    printf("%f %f\n", x, y);
    return 0;
}

/* 你提交的程序将被嵌在这里 */
void ToCoord(double *x, double *y, double r, double theta)
{
    *x = r*cos(theta);
    *y = r*sin(theta);
}