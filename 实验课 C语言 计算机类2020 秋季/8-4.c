#include <stdio.h>
#include <math.h>

int main()
{    
    int a,b[4][3];
    int sum_1=0,sum_2=0,sum_3=0,sum_4=0;
        for (int i = 0; i < 4; i++)
        {
            /* code */
            for (int j = 0; j < 3; j++)
            {
                /* code */
                scanf("%d",&b[i][j]);  
                if (i==0)
                {
                    /* code */
                    sum_1 += b[i][j];
                }
                if (i==1)
                {
                    /* code */
                    sum_2 += b[i][j];
                }
                if (i==2)
                {
                    /* code */
                    sum_3 += b[i][j];
                }
                if (i==3)
                {
                    /* code */
                    sum_4 += b[i][j];
                }
            }
            
        }
        printf("%d\n%d\n%d\n%d",sum_1,sum_2,sum_3,sum_4);
    
    
    
    
    

    return 0;
}
