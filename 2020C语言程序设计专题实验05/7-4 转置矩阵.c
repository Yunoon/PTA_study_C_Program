#include <stdio.h>
#include <math.h>


int main()
{
    int n;
    int a[10][10];
    int b[10][10];
    int c[10][10];
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
            
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
            c[i][j] = a[i][j]+b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%d",c[i][0]);
        for (int j = 0; j < n; j++)
        {
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}