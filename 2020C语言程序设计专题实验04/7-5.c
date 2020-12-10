#include<stdio.h>
#include<math.h>


int main()
{
    double sum=0;
    int a[10][2]={0};
    double sum_pow=0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 1; i < 10; i++)
    {   
        int x,y;
        x = pow((0-a[i][0]),2);
        y = pow((0-a[i][1]),2);
        sum_pow = sqrt(x+y);
        sum += sum_pow;
    }
    printf("distance = %.6lf",sum);
    
    
    
    
    

    return 0;
}