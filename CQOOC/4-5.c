#include <stdio.h>


int main()
{
	int n,t=1;
	double sum=0;
	scanf("%d",&n);

	for (int i = 0; i < n; i++,t+=3)
	{
		/* code */
		double fu,m=0;
		fu = (i%2?-1.0:1.0);
		m = (double) fu*(1/(t*1.0));
		sum += m;
	}
	
	printf("%.3lf",sum);


	return 0;
}