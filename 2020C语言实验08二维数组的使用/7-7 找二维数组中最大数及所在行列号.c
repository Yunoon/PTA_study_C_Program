#include<stdio.h>

/*简单判断i,j的关系*/
int main()
{
    int a[20][20];
    int m;
    scanf("%d",&m);
    int x=0,y=0;
    int max=0;
    for (int i = 0; i < m; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
        }
        
    }
    max = a[0][0];
    for (int i = 0; i < m; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            if (a[i][j] > max)
            {
                /* code */
                max = a[i][j];
                x = i;
                y = j;
            }
            
        }
        
    }
    printf("max=%d,i=%d,j=%d",max,x,y);

    return 0;
}