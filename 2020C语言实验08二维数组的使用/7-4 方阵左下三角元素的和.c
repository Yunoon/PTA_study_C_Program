#include<stdio.h>

/*简单判断i,j的关系*/
int main()
{
    int a[4][4];
    int sum =0;
    for(int i = 0; i < 4; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
            if (i >= j)
            {
                /* code */
                sum += a[i][j];
            }
            
        }
        
    }
    printf("%d",sum);
       




    return 0;
}