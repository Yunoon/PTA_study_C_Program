#include<stdio.h>

/*阴间题目，不多评价，算就对了*/

int main()
{
    float a,b,c,d;
    scanf("%f %f",&a,&b);

    c = a+b;
    if (c < 2760)
    {
        /* code */
        printf("%.2f",b*0.538);
    }
    else if (c >= 2760 && c < 4800)
    {
        /* code */
        if (a<2760)
        {
            /* code */
            printf("%.2f",0.538*(2760-a)+(c-2760)*0.588);
        }
        else if (a>=2760)
        {
            /* code */
            printf("%.2f",0.588*b);
        }
    }
    else if (c>4800)
    {
        /* code */
        if (a>=2760 && a< 4800)
        {
            /* code */
            printf("%.2f",0.588*(4800-a)+(c-4800)*0.838);
        }
        else if (a < 2760)
        {
            /* code */
            printf("%.2f",(60*0.538)+(2040*0.588)+((c-4800)*0.838));
        }
        else
        {
            printf("%.2f",b*0.838);
        }
        
        
    }
    
        return 0;
    }