#include <stdio.h>
#include <math.h>
int main(){
	double x1,y1,x2,y2;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	double x,y;
	x=x1+x2;
	y=y1+y2;
	
	//.1f 四舍五入的原因
	if(fabs(x)<0.05){
		x=fabs(x);
	}
	if(fabs(y)<0.05){
		y=fabs(y);
	}
	
	printf("(%.1f, %.1f)",x,y);
    
	return 0;
}