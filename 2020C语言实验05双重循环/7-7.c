# include<stdio.h>
int main()
{
	int i,j,count=1,max=1;

	scanf("%d",&max);
	
	for (int i = 1;i*3<max; i++)
	{
		/* code */
		for (int j = 1;j*2<max; j++)
		{
			/* code */
			for (int k = 1;k<max; k++)
			{
				/* code */
				if (i*3+j*2+k==max)
				{
					/* code */
					printf("cattle=%d,pig=%d,vegetable=%d\n",i,j,k);
				}
				
			}
			
		}
		
	}
	


	return 0;
}