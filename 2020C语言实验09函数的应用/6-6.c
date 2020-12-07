#include <stdio.h>

double Cash(double value);

double Cash(double value)
{
    if (value < 100)
    {
        /* code */
        return value;
    }
    else if (value >= 100 && value < 200)
    {
        /* code */
        return value*0.95;
    }
    else if (value >= 200 && value < 500)
    {
        /* code */
        return value*0.9;
    }
    else if (value >= 500 && value < 1000)
    {
        /* code */
        return value*0.85;
    }
    else if (value >= 1000)
    {
        /* code */
        return value*0.8;
    }
    
    
}

int main()
{
    double p, c;
    scanf("%lg", &p);
    c = Cash(p);
    printf("%.2f\n", c);
    return 0;
}
