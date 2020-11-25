#include <stdio.h>
#include <math.h>

int zuizhi(int a[20000],int i,int sum)//判断最值
{
    int max=a[0],min=a[0];//预先给最值赋值为0
    float pj=0;
    for (int j = 0; j < i; j++)
    {
        if (a[j+1]>max)//当后数大于max是给最值赋值为后数
        {
            /* code */
            max = a[j+1];
        }
        if (a[j+1]<min)//当后数小于max是给最值赋值为后数
        {
            /* code */
            min = a[j+1];
        }
        
        
    }
    // printf("1 %d\n",sum);
    sum = sum-max-min;
    // printf("%d %d\n",max,min);
    // printf("2 %d\n",sum);
    pj = (1.0*sum)/(i-1);
    printf("%.1f",pj);
    
}



int main()
{
    int a[20000];
    int n;
    int i,sum=0;
    scanf("%d",&n);
    
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        sum += a[i];
    }
    zuizhi(a,i-1,sum);
    
    
}