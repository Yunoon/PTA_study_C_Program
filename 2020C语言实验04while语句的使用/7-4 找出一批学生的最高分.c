#include <stdio.h>


int main() {
	
	int n,max;

	// scanf("%d",&n);

	int a[100];
	max=0;
    
	for(int i=0;i<100;i++){	
        scanf("%d",&a[i]);
		if (a[i]<0)
		{
			/* code */
			break;
		}
		
	    else if(a[i]>max)
        max=a[i];
    }
    printf("%d",max);	
	
	
	return 0;
}