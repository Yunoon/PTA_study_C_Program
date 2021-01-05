#include<stdio.h>
#include <math.h>
int main()
{   
    int a,b,t[3];
    int a_1=0,b_1=0;

    scanf("%d %d",&a,&b);
    scanf("%d %d %d",&t[0],&t[1],&t[2]);
    for (int i = 0; i < 3; i++)
    {
        /* code */
        if(t[i]==0)
            a_1++;
        else
        {
            b_1++;
        }
        
    }
    
    if(a>b && a_1>0)
        printf("The winner is a: %d + %d",a,a_1);
    else if(a<b && a_1==3)
    {
        printf("The winner is a: %d + %d",a,a_1);
    }
    else
    {
        printf("The winner is b: %d + %d",b,b_1);
    }
    
    

    return 0;
}
