#include <stdio.h>

int main()
{  
    float n=0,m=0;
    int count=1;
    float x1,x2;


    scanf("%f %f",&n,&m);

    x1 = n/2;
    x2 = 0.5*(x1+(n/x1));//先进行一次运算
    while ((x1-x2)>m)//当大于精度时，继续交换运算
    {
        /* code */
        x1 = x2;
        x2 = 0.5*(x1+(n/x1));

        count++;
    }
    
    printf("%.4lf",(x1+x2)*0.5);



    printf(" %d",count);
    
    return 0;

}