#include<stdio.h>
int main(){
	

	int a,b,sum;
	scanf("%d/%d",&a,&b);
    int x,y;
    x =a;
    y = b;
    sum = a%b;
    if (sum==0)
    {
        /* code */
        printf("%d",b);
    }
    else
    {
        while (sum!=0)//用欧几里得辗转法求最大公因数
        {
            /* code */
            a = b;
            b = sum;
            sum = a%b;
        }
        printf("%d/%d",x/b,y/b);
    }
    
    
    

}