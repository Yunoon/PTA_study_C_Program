#include <stdio.h>



int zuizhi(int a[20],int i)
{
    int max=a[0],min=a[0];
    for (int j = 0; j < i; j++)
    {
        if (a[j+1]>a[j])
        {
            /* code */
            max = a[j+1];
        }
        if (a[j+1]<a[j])
        {
            /* code */
            min = a[j+1];
        }
        
        
    }
    printf("%d %d\n",max,min);
}

int bujige(int a[20],int i)
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
    int a[20];
    int i;
    
    for (i = 0; i <= 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        if (i>=10 || a[i]<0)
        {
            /* code */
            break;
        }
        else if (a[i]>100)
        {
            /* code */
            scanf("%d",&a[i]);
        }
        
        
        // printf("%d ",a[i]);
    }
    paixu(a,i);
    bujige(a,i); 
    zuizhi(a,i-1);


    
    return 0;

}



