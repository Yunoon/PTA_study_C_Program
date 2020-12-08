#include<stdio.h>
/*if 语句的运用*/
int main()
{
    int a;
    scanf("%d",&a);

    if (a>0)
    {
        /* code */
        printf("sign(%d) = 1",a);
    }
    else if (a<0)
    {
        /* code */
        printf("sign(%d) = -1",a);
    }
    else if (a==0)
    {
        /* code */
        printf("sign(%d) = 0",a);
    }
    
    

    return 0;
}