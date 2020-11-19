#include<stdio.h>



int main()
{
    int a;
    int count=0;//这里的初始化很重要
    scanf("%d",&a);

    if (a<=2000 || a>2100)
    {
        /* code */
        printf("Invalid year!\n");
    }
    else
    {
        for (int i = 2001; i <= a; i++)
        {
            /* code */
            if (i%4==0 && i%100!=0||i%400==0)
            {
                /* code */
                printf("%d\n",i);
                count=1;
            }

        }
        if (count == 0)
        {
            /* code */
            printf("None\n");
        }
        
    }
    
    
    
    
    return 0;
}