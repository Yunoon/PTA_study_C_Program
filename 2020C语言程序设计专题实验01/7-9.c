#include<stdio.h>

int main()
{
    int a;
    int count_j=0,count_o=0;
    int b[1000];//记得范围，不然要溢出
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        /* code */
        scanf("%d",&b[i]);
        if (b[i]%2 == 0)
        {
            /* code */
            count_o++;
        }
        else
        {
            /* code */
            count_j++;
        }
        
        
        
    }
    
    printf("%d %d",count_j,count_o);
    
    
    
    return 0;
}