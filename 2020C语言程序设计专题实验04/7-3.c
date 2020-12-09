#include<stdio.h>
#include<math.h>


int main()
{
    int a[100][100];
    int m,n;
    int sum[100]={0};
    int item_core[100];
    int item_res[100];
    scanf("%d %d",&m,&n);//读取学生人数和判断题数量

    for (int i = 0; i < n; i++)//每道题的满分值
    {
        /* code */
        scanf("%d",&item_core[i]);
    }
    for (int i = 0; i < n; i++)//每道题对应的正确答案
    {
        /* code */
        scanf("%d",&item_res[i]);
    }
    for (int i = 0; i < m; i++)//学生的解答
    {
        /* code */
        int sum_i=0;
        for (int j = 0; j < n; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
            if (a[i][j] == item_res[j])
            {
                /* code */
                sum_i += item_core[j];
            }
            
        }
        sum[i] =sum_i;
        
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        printf("%d\n",sum[i]);
    }
    
    
    
    

    return 0;
}