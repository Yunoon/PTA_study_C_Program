#include<stdio.h>

/*简单判断i,j的关系*/
int main()
{
    int a[4][5];
    int sum=0;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        for (int j = 0; j < 5; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
            if (i==0 || j==0 || j==4 || i==3)
            {
                /* code */
                sum += a[i][j];
            }   
        }
        
    }
    printf("%d",sum);

    return 0;
}