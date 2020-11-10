# include<stdio.h>
int main()
{
	int i,j,count=1,max=1;

	scanf("%d",&max);
	for (i = 3; i < 100; i+=3)
	{
		/* code */
		for (j = 1; j < 100; j++)
		{
			/* code */
			if (i/3+j*3+(100-i-j)*5==100 && 100-i-j>0)
			{
				/* code */
				if (count<=max)
				{
					/* code */
					printf("%d %d %d\n",(100-i-j),j,i);
					count++;
				}			
					
			}		
				
		}
			

	}
    
	return 0;
}