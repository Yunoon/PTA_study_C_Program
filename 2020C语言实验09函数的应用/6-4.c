#include <stdio.h>

double Encounter(double distance, double speed1, double speed2);

double Encounter(double distance, double speed1, double speed2)
{
    double speed=0;
    speed = speed1+speed2;
    return distance/speed;
}


int main()
{
    double d, s1, s2, t;
    scanf("%lg%lg%lg", &d, &s1, &s2);
    t = Encounter(d, s1, s2);
    printf("%.2f\n", t);
    return 0;
}
