#include <stdio.h>


int main(){
    int n=0,a[10];
    int count=0;

    scanf("%d",&n);
    if (n>1 && n<=10)
    {
        for (int i = 0; i < n; i++)
        {
           scanf("%d",&a[i]);
        }
        for (int i = 1,temp; i < n; i++)
        {
            count++;//每一次循环count+1
            if (count%3==0 || i+1 == n)//三个数换一次行，或者最后一个数
            {
                printf("%d\n",a[i]-a[i-1]);
            }
            else
            {
                printf("%d ",a[i]-a[i-1]);//未满3个数带空格输出
            }
            
        }
        
    }
   

    return 0;
    
}