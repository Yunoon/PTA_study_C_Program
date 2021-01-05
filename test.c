#include <stdio.h>
#include <math.h>



int main()
{
	int n;
	int x=0,y=0,c=1;
	int a[5][5]={0};
	scanf("%d",&n);
	int frezz=1;
	int zhuan=0;
	a[x][y]=1;
	while (n == c)
	{
		/* code */
		while (y+1 <n  &&a[x][y+1]==0 && frezz)
		{
			/* code */
			a[x][++y]=++c;
			frezz=0;
		}
		
		while (a[x+1][y-1]==0 && y)
		{
			/* code */
			a[++x][--y]=++c;
			frezz=1;
		}
		while (x+1 < n && a[x+1][y]==0 && frezz)
		{
			/* code */
			a[++x][y]=++c;
			frezz=0;
		}
		
		while (a[x-1][y+1]==0 && x)
		{
			/* code */
			a[--x][++y]=++c;
			frezz=1;
		}

		//------------------------
		
	}
	
	for (int i = 0; i < n; i++)
	{
		/* code */
		for (int j = 0; j < n; j++)
		{
			/* code */
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}