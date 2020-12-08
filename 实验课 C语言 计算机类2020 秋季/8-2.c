#include <stdio.h>
#include <math.h>

int main()
{    
    int a,b[10][10];
    int sum=0;
    scanf("%d",&a);
    if (a>1 && a<=10)
    {
        for (int i = 0; i < a; i++)
        {
            /* code */
            for (int j = 0; j < a; j++)
            {
                /* code */
                scanf("%d",&b[i][j]);
                if (i+j != a-1 && j != a-1 && i != a-1)//这里判断i，j的关系
                {
                    /* code */
                    sum += b[i][j];
                }
                
            }
            
        }
        printf("%d",sum);
    }
    

    
    
    
    

    return 0;
}
