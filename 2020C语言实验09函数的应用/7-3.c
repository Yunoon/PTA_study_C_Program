#include <stdio.h>
#include <math.h>

int fd(int a,int b)
{
    int c[100]= {0};
    int sum,count=0;
    for (int i = a; i <= b; i++)
    {
        /* code */
        sum=0;
        for (int j = 1; j < i; j++)
        {
            /* code */
            if (i%j==0)
            {
                /* code */
                sum +=j;
            }
            
        }
        if (sum==i)
        {
            /* code */
            c[count]=i;
            count++;
        }
        
        
    }
    if (c[0]==0)
    {
        printf("None");
    }
    else
    {
        printf("%d",c[0]);
        for (int i = 1; i < count; i++)
        {
            /* code */
            printf(" %d",c[i]);
        }
    }
    
    
    

}

int main()
{    
    int a,b;

    scanf("%d %d",&a,&b);
    fd(a,b);

    return 0;
}
