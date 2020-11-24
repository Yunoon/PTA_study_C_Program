#include <stdio.h>
#include <math.h>
/*简单循环，调用sqrt求值*/
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