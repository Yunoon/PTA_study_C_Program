#include <stdio.h>
#include <math.h>

int main()
{    
    int a,b[6][6];
    int sum=0;
    scanf("%d",&a);
    if (a>=1 && a<=6)
    {
        for (int i = 0; i < a; i++)//读取数据
        {
            /* code */
            for (int j = 0; j < a; j++)
            {
                /* code */
                scanf("%d",&b[i][j]);  
            }
            
        }

    }
    int temp=0;
    for (int i = 0; i < a; i++)//交换位置
    {
        for (int j = i; j < a; j++)
        {
            
            temp = b[i][j];
            b[i][j] = b[j][i];
            b[j][i] = temp;
        }     
    }
    int count=0;
    for (int i = 0; i < a; i++)//输出数据
        {
            /* code */
            for (int j = 0; j < a; j++)
            {
                /* code */
                printf("%4d",b[i][j]);
                count++; 
            }
            if (count % a ==0)
            {
                /* code */
                printf("\n");
            }
            
        }    
    
    
    
    
    

    return 0;
}
