#include <stdio.h>

int main()
{
    int a=0,b=0,num;

    scanf("%d",&num);
    a = (num+1)/2;
    for (int i = 1; i <= num; i++)
    {
        /* code */
        if (i<=a)
        {
            /* code */
            for (int k = 0; k < num-(2*i-1); k++)
            {
                /* code */
                printf(" ");
            }
            
            for (int j = 0; j < (2*i-1); j++)
            {
                /* code */
                printf("* ");
            }
            
        }
        else if (i>a)
        {
            /* code */
            int c=0;
            c = a-(i%a);
            for (int k = 0; k < num-(2*c-1); k++)
            {
                /* code */
                printf(" ");
            }
            for (int j = 0; j < (2*c-1); j++)
            {
                /* code */
                printf("* ");
            }
            
        }
        

        printf("\n");
    }
    // printf("%d",a);    



    
}