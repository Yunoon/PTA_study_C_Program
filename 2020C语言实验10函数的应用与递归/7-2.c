#include <stdio.h>


int pd(int n)
{
    int a=0;  // 素数的个数

    for(int i=2;i<n;i++){
        if(n%i==0){
            a++;  // 素数个数加1
        }
    }
    if(a==0){
        return 1;
    }else{
        return 0;
    }  
}

int wh(int n)
{
    int temp=0;
    int a;
    a = n;
    while (a>0)
    {
        /* code */
        temp += a %10;
        a /= 10;
    }
    if (pd(temp))
    {
        /* code */
        return 1;
    }
    else
    {
        return 0;
    }
    
    
    
}

int main()
{
    int n;
    scanf("%d",&n);
    if (pd(n) && wh(n))
    {
        /* code */
        printf("yes");
    }
    else
    {
        printf("no");
    }

}