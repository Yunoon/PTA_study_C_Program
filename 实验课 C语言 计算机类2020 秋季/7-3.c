#include <stdio.h>
/*
挺巧妙的算法
如果在k的范围内a[i]找不到相同的值，则k+1
a[k++]=a[i],是先把a[k]=a[i],再k++


模拟一遍
55 39 55 55 53 82 10 26 45 81 55 91 26 26 91 60 31 20 36 82



*/


int main(){
    
    int i,j=0,k,a[20],ln;

    for (int t = 0; t < 20; t++)//输入20个值
    {
        /* code */
        scanf("%d",&a[t]);
    }

    for(k=i=1;i<20;i++)//将每一个值都取出来
    {
        for(j=0;j<k;j++)//在k的范围内取a[j]，与a[i](及当前循环)相比较
        {
            
            if(a[j]==a[i])//当在循环内找到相同的值，跳出循环，因此j必然小于k
            {
                break;
            } 
        }
        
        if(j>=k)//判断j是否大于等于k，成立则赋值。 a[k++]=a[i],是先把a[k]=a[i],再k++
            
            a[k++]=a[i];
            
    }
    printf("%d",a[0]);
    for(i=1;i<k;printf(" %d",a[i++]));//Look at...
        printf("\n");
        
}