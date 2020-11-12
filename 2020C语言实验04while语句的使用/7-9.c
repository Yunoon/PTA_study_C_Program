#include <stdio.h>


int main() {
	
	int n,max;
	int count_j=0,count_o=0;

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
		
	    if(a[i]%2==0)
        	count_o++;
	    if(a[i]%2!=0)
        	count_j++;
		
    }
    printf("Odds=%d\nEvens=%d",count_j,count_o);	
	
	
	return 0;
}