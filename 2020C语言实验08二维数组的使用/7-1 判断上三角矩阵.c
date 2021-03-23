#include <stdio.h>

int main()
{
    int a[10][10],b[100]={0};    
    int n,t,count=0;

    scanf("%d",&t);//输入矩阵个数

    for (int m = 0; m < t; m++)
    {
        scanf("%d",&n);//输入矩阵大小
        for (int i = 0; i < n; i++)//读取矩阵
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d",&a[i][j]);
            }
            
        }
        for (int i = 0; i < n; i++)//判断矩阵
        {
            for (int j = 0; j < n; j++)
            {
                if (i>j && a[i][j] != 0)
                {
                    count++;
                }
                
            }
            
        }
        if (count == 0)
        {
            b[m] = 1;
        }
        else
        {
            b[m] = 0;
        }
        count = 0;
        
        
    }
    for (int i = 0; i < t; i++)
    {
        /* code */
        if (b[i]==1)
        {
            /* code */
            printf("YES\n");
        }
        else if (b[i]==0)
        {
            /* code */
            printf("NO\n");
        }
        
    }
    
        
    
}