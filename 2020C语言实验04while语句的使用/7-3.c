#include <stdio.h>  
#include <math.h>
 
int main(){
	int m,n,x,c;
	scanf("%d %d",&m,&n);
	c=m%n;

	x=m*n;
	
	if(c==0){
		printf("%d %d",n,x/n);
	}else{
		
		while(c!=0){
			m=n;
			n=c;
			c=m%n;		 
		}
		printf("%d %d",n,x/n);
	}					         
    return 0;  
 }