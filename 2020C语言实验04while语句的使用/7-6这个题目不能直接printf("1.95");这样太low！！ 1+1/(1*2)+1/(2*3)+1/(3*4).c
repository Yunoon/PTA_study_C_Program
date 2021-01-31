#include <stdio.h>


int main() {
	
	int n=1;
	double max=1.0;

	// scanf("%d",&n);

	while (n<20)
	{
		/* code */
		max += (double)1/((n+1)*n);
		n++;
		// printf("%.2lf\n",max);
	}
	printf("%.2lf",max);
	
	
	
	return 0;
}