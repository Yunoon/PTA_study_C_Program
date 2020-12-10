#include<stdio.h>
#include<math.h>


int main()
{   
    int a[10][10];
    int num=0;
    scanf("%d",&num);
    int cout=1;
    for (int i = 0; i < num; i++)
    {
        /* code */
        for (int j = 0; j < num; j++)
        {
            /* code */
            if (i>=j)
            {
                /* code */
                a[i][j] = cout++;
            }
            else
            {
                a[i][j] = 0;
            }
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}