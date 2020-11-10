#include<stdio.h>
int main()
{
	int a,b;
    float c;
    scanf("%d %d",&a,&b);
    c = a*b*10.0/100;
    printf("%.2lf",c);

    return 0;
}