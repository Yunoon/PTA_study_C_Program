#include <stdio.h>
#include <math.h>

int main()
{
    int a,b=1;
    scanf("%d",&a);
    printf("sqrt(%d)=%.2f",b,sqrt(b));
    for (int i = 2; i <= a; i++)
    {
        /* code */
        printf(",sqrt(%d)=%.2f",i,sqrt(i));
    }
    
    
    
    
}