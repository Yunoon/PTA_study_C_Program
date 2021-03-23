# include<stdio.h>
int main()
{
	int a=0,x,temp,count;
	scanf("%d",&a);

        
    for (int i = 0; i < 1000; i++)
    {
        /* code */

        
        x=i;
        temp=0;
        while (x)//将循环数的各位数取出相加
        {
            temp += x%10;
            x /= 10;
            

        }
        if (temp==a)//判断取出相加是否为原数
        {
            /* code */
            printf("%8d",i);
            count++;//成功时换行数+1
            if (count%6==0)//成功时进行判断是否应该换行
            {
                /* code */
                printf("\n");
            }
            
        }        

        
            
            // printf("%d ",i);
        // printf("%d",x);
    }
    
	return 0;
}