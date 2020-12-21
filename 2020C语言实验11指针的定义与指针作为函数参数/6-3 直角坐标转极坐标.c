#include <stdio.h>
#include <math.h>

void ToPolar(double *r, double *theta, double x, double y);

int main()
{
    double x, y, r, theta;
    scanf("%lg%lg", &x, &y);
    ToPolar(&r, &theta, x, y);
    printf("%f %f\n", r, theta);
    return 0;
}

/* 你提交的程序将被嵌在这里 */
void ToPolar(double *r, double *theta, double x, double y)
{
    *r = sqrt(pow(x,2)+pow(y,2));
    *theta = atan2(y,x);
}