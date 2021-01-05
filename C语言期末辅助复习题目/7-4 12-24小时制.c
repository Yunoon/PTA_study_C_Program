#include<stdio.h>

int main()
{   
    int a,b;
    char time;
    scanf("%d:%d",&a,&b);

    if(a>12)
    {
        a -= 12;
        printf("%d:%d PM",a,b);
    }
    else if(a==12)
    {
        printf("%d:%d PM",a,b);
    }
    else if(a<12)
    {
        printf("%d:%d AM",a,b);
    }


    return 0;
}
