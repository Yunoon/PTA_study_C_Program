#include<stdio.h>
int main()
{
	int input,a,b,c,d,e;
    scanf("%d",&input);
    a = input / 10000;
    b = (input - a*10000)/1000;
    c = (input - a*10000 - b*1000)/100;
    d = (input - a*10000 - b*1000 - c*100)/10;
    e = (input - a*10000 - b*1000 - c*100 - d*10);

    printf("%d%d%d%d%d",e,d,c,b,a);

    return 0;
}