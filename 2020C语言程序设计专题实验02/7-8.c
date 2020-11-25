#include <stdio.h>
/*
做法有很多种，如果看不懂这种可以在草稿纸上演练一下


*/
int main()
{
    int a=0,b=0,num;

    scanf("%d",&num);
    a = (num+1)/2;//找出中间值
    for (int i = 1; i <= num; i++)//第一层循环7次
    {
        /* code */
        if (i<=a)
        {
            /* code */
            for (int k = 0; k < num-(2*i-1); k++)//在总层数-每层需要的*个数
            {
                /* code */
                printf(" ");
            }
            
            for (int j = 0; j < (2*i-1); j++)//找出每层需要的*个数
            {
                /* code */
                printf("* ");
            }
            
        }
        else if (i>a)
        {
            /* code */
            int c=0;
            c = a-(i%a);//大于情况则把中间值-余数
            for (int k = 0; k < num-(2*c-1); k++)//在总层数-每层需要的*个数
            {
                /* code */
                printf(" ");
            }
            for (int j = 0; j < (2*c-1); j++)//找出每层需要的*个数
            {
                /* code */
                printf("* ");
            }
            
        }
        

        printf("\n");
    }
    // printf("%d",a);    



    
}