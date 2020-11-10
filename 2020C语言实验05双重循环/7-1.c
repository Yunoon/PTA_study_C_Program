# include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d",&a);
    for(b=0;b<a;b++)
    {
    	scanf("%1d%1d%1d%1d%1d%1d",&c,&d,&e,&f,&g,&h);
    	if(c+d+e==f+g+h)
    	{
    		printf("You are lucky!\n");
		}
		else
		{
			printf("Wish you good luck.\n");
		}
	}
	return 0;
}