#include<stdio.h>
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