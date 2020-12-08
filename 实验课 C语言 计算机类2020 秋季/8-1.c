#include <stdio.h>
/*建议手动用笔或者调试工具逐步模拟一遍*/
int main()
{
	int c=1,x=0, y=0,n, a[10][10]={0};
	scanf("%d", &n);
	a[x][y] = 1;
	while(n*n!=c)
	{
	    while(y+1<n && !a[x][y+1] )//X轴不动，Y轴加1，同时判断后面的那位数是否存在
		     a[x][++y] = ++c;
		while(x+1<n  && !a[x+1][y])//X加1，Y轴不动，同时判断后面的那位数是否存在
		     a[++x][y] = ++c;
		while(y-1>=0  && !a[x][y-1])//X轴不动，Y轴减1，同时判断后面的那位数是否存在
		     a[x][--y] = ++c;
		while(x-1>=0 && !a[x-1][y])//X轴减1，Y轴不动，同时判断后面的那位数是否存在
		     a[--x][y] = ++c;
    }
	for(x=0;x<n;x++)
	{ 
	   for(y=0;y<n;y++)
	   	{
	   		printf("%3d", a[x][y]);//依次输出
		}
	   	printf("\n");
    }
 } 