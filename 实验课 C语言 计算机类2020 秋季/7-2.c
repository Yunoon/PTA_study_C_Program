#include <stdio.h>

/*
噢噢噢噢，终于把这道题凹过去了
分享一下这道题的经验：
这里定义了3个函数分别为：paixu(排序)、bujige(不及格)、zuizhi(最值)
分别对应了三行的输出
具体看函数内的注解
*/

int zuizhi(int a[20],int i)//判断最值
{
    int max=a[0],min=a[0];//预先给最值赋值为0
    for (int j = 0; j < i; j++)
    {
        if (a[j+1]>max)//当后数大于前数是给最值赋值为后数
        {
            /* code */
            max = a[j+1];
        }
        if (a[j+1]<min)
        {
            /* code */
            min = a[j+1];
        }
        
        
    }
    printf("%d %d\n",max,min);
}

int bujige(int a[20],int i)//判断是否及格
{
    int count=0;
    for (int j = 0; j < i; j++)
    {
        /* code */
        if (a[j]<60)
        {
            /* code */
            printf("%d ",a[j]);
            count++;
        }
        
    }
    printf("%d\n",count);
    
}


int paixu(int a[20],int i)//运用直接插入排序
{
    int j,k;
    for (j = 1; j < i; j++)
    {
        /* code */
        if (a[j]>a[j-1])
        {
            /* code */
            int temp = a[j];
            for (k = j-1; k >= 0 && a[k]<temp; k--)
            {
                a[k+1] = a[k];//交换位置
            }
            a[k+1] = temp;//在第二个循环执行完后k还会-1，因此这里要+1
            
        }
    }
    printf("%d",a[0]);//想要按格式输出，因此预输出一个，方便后续
    for (int t = 1; t < i; t++)
    {
        printf(" %d",a[t]);

    }
    printf("\n");

}



int main()
{  
    int a[20];//定义数组
    int i;
    
    for (i = 0; i <= 10; i++)//输入10个数
    {
        /* code */
        scanf("%d",&a[i]);
        if (i>=10 || a[i]<0)//当输入的数的个数大于10，或输入值小于0
        {
            /* code */
            break;
        }
        else if (a[i]>100)//当输入的数大于100跳过
        {
            /* code */
            scanf("%d",&a[i]);
        }
        
        
        // printf("%d ",a[i]);
    }
    paixu(a,i);//分别调用3个函数
    bujige(a,i); 
    zuizhi(a,i-1);


    
    return 0;

}



