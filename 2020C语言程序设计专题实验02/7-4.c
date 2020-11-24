#include <stdio.h>
/*多层循环的运用
需要注意的是1元3只笔这种情况，需要给初始化为浮点，
因为会带小数
*/
int main()
{
    int b;
    float a;
    scanf("%f %d",&a,&b);
    for (int i = 1; i < (a/5); i++)
    {
        /* code */
        for (int j = 1; j < (a/3); j++)
        {
            /* code */ 
            for (int  k = 1; k < (a*3); k++)
            {
                /* code */
                if (i*5+j*3+(k/3.0) == a && i+j+k == b)//判断钱和笔的数量
                {
                    /* code */
                    printf("%d,%d,%d\n",i,j,k);
                }
                
            }
            
        }
        
    }
    
    
    
    
}