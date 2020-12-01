#include<stdio.h>

/*简单判断i,j的关系*/
int main()
{
    int a[100][100]={0};
    int sum =0,sum_1=0;
    int n,m;
    int x,y;
    scanf("%d %d",&m,&n);
    for(int i = 0; i < m; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
            if (a[i][j]==0)
            {
                /* code */
                x = i;
                y = j;
            }
            
        }
        
    }
    sum = a[x-1][y-1]+a[x-1][y]+a[x-1][y+1]+a[x][y-1]+a[x][y+1]+a[x+1][y-1]+a[x+1][y]+a[x+1][y+1];
    for (int i = 0; i < m; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            sum_1 += a[i][j];
        }
        
    }
    
    printf("%d",sum_1-sum);
       




    return 0;
}