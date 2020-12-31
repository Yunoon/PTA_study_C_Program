#include <stdio.h>
#include <math.h>
#define PI 3.14


int fact(i)
{
	if (i==1)
	{
		/* code */
		return 1;
	}
	else
	{
		return fact(i) + fact(i-1);
	}
	
}


int main()
{
	int a;

	scanf("%d",&a);
	printf("area=%d",fact(a));
	return 0;
}


/* 请在这里填写答案 */