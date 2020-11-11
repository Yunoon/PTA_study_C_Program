#include<stdio.h>


//解决斐波那契数列数列问题用到了递归的思想，从第三项开始，
//每一项都可以看做是前两项加起来的和，直到递归到第一项或者第二项返回其值1。

int fact(int n)//运用了递归算法，详细请自行百度
{  
    if(n==1)
        return 0;
    else if (n==2 || n==3)
    {
        /* code */
        return 1;
    }
    
    else
   return fact(n-1)+fact(n-2);
}
int main()
{  
 int n,m;
//  printf("请输入：");
 scanf("%d",&n);
    m=fact(n);
 printf("%d",m);
 return 0;
}