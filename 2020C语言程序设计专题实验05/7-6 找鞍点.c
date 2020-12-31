#include <stdio.h>
#include <math.h>

int main()
{
    int a[4][4],max,min,max_x,min_y;
    
    for (int i = 0; i < 4; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
        }
        
    }


    int row, col;
	int i;
	for (i = 0; i < 4; ++i)
	{
		row = i;
		col = 0;
		for (int j = 1; j < 5; ++j)
		{
			if (a[i][j] > a[row][col])
			{
				row = i;
				col = j;
			}
		}
		int m;
		for (m = 0; m < 4; ++m)
		{
			if (a[m][col] < a[row][col])
				break;
		}
		if (m >= 4)
		{
			printf("a[%d][%d]=%d\n", row, col, a[row][col]);
			break;
		}
	}

	if (i >= 4)
	{
		puts("It is not exist!");
	}

    
    

    
    return 0;
}