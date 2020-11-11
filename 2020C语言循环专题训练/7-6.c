//方法一
#include<stdio.h>
int main()
{
    int a,b,c,d,i,m=0,n;
    scanf("%d",&a);
    for(i=0;i!=10;i++)
    {
        scanf("%d",&b);
        if(b<=a+30)
            m++;
    }
    printf("%d",m);
    return 0;
}

//方法二，要用数组
#include <stdio.h>

int cath()
{  
    int n=0,m[10]={0};
    int count=0;

    scanf("%d",&n);
        /* code */
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&m[i]);
        if (n+30>=m[i] && m[i]>=100 && m[i]<=200)
        {
            /* code */
            count++;
        }
            
    }
        

    printf("%d",count);
    
    return 0;

}