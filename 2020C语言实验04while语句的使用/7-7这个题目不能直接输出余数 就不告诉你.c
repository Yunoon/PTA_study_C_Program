#include <stdio.h>


int main() {
	
	int a,b,c,temp=0;

	scanf("%d %d",&a,&b);
	c = a*b;
	while (c>0)
	{
		/* code */
		temp = temp*10+c%10;
		c /=10;
	}
	
	printf("%d",temp);
	
	
	
	return 0;
}