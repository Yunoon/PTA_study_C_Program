#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);

    b = a %10;
    a /= 10;
    c = (a%10)*10 + b;
    if (c == 3 || c == 4 || c==5)
    {
        /* code */
        printf("spring\n");
    }
    else if (c == 6 || c == 7 || c==8)
    {
        /* code */
        printf("summer\n");
    }
    else if (c == 9 || c==10 || c==11)
    {
        /* code */
        printf("autumn\n");
    }
    else if (c == 12 || c ==1 || c==2)
    {
        /* code */
        printf("winter\n");
    }


    return 0;
}