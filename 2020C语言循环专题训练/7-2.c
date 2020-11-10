#include<stdio.h>
int main(){
	

	int a,b,sum;
	scanf("%d/%d",&a,&b);
    int x,y;
    x =a;
    y = b;
    if (b!=0)
    {
        /* code */
        sum = a%b;
        if (a==b)
        {
            /* code */
            printf("1/1",x,y);
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
    
 

    
    
    

}