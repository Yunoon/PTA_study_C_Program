#include<stdio.h>
int main(void)
{
    int a, b, r, max, x, y;


    scanf("%d/%d", &a, &b);
    x = a;
    y = b;
    if(a > b)
    {
        max = a, a = b, b = max;
        while(a != 0)
      {
        r = b % a;
        b = a;
        a = r;
      }
        printf("%d/%d", x / b, y / b);
    }
    else
    {
        max = b, b = a, a = max;
        while(b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        printf("%d/%d", x / a, y / a);
    }
    return 0;


}