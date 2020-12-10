#include<stdio.h>
#include<math.h>


int main()
{
    int a[3][4];
    int sum=0;
    float pj=0;
    int count=0;
    int sum_pj=0;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);//二维读取值
            sum += a[i][j];//算总数
        }
        
    }
    pj = sum*1.0 / 12.0;//算平均数，注意是浮点数
    // printf("%lf\n",pj);
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            if (a[i][j] >= pj)//注意大于等于
            {
                /* code */
                count++;
                sum_pj += a[i][j];
            }
            
        }
        
    }
    printf("s=%d,n=%d",sum_pj,count);
    
    
    
    
    

    return 0;
}