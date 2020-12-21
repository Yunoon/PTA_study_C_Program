#include <stdio.h>



int pd()
{
    int a=1,b=2;
    return a,b;
}
int main()
{
    int a=0,b=0;
    a=pd()[0];
    b=pd()[1];
    printf("%d %d",a,b);
    return 0;
}
