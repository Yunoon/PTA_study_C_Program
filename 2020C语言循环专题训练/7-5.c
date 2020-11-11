#include<stdio.h>

int main()
{  
    int n,m;
    int count;
//  printf("请输入：");
    scanf("%d\n%d",&n,&m);


    for (int i = n; i <= m; i++)//限定范围n,m
    {
        /* code */
        if (i%3==0||i%5==0||i%7==0)//判断取余是否为0
        {
            /* code */
            count++;
        }
        else
        {
            continue;
        }
        
        
    }
    printf("%d",count);
    



 
 return 0;

}