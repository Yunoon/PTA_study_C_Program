#include <stdio.h>


int fact(int i)
{
	if (i==1)
	{
		/* code */
		return 1;
	}
	else
		return fact(i-1)*i;
	
}


int main(void)
{  
	int sum;
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		/* code */
		sum += fact(i);
	}
	
	printf("%d",sum);

    return 0;
}
