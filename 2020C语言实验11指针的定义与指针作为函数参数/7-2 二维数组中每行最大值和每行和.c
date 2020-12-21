#include <stdio.h>


int find(int a[3])
{
    int max=a[0];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        if (a[i]>max)
        {
            /* code */
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int a[10][10];


    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
        }        
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            /* code */
            sum += a[i][j];
            printf("%4d",a[i][j]);
        }
        printf("%4d%4d\n",find(a[i]),sum);
    }
    
    return 0;
}
