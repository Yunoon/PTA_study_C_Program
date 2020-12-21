#include <stdio.h>

void IntSwap(int *x, int *y);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    IntSwap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

/* 你提交的代码将被嵌在这里 */
void IntSwap(int *x, int *y)
{
    int temp;
    
    temp =*x;
    *x=*y;
    *y=temp;
}