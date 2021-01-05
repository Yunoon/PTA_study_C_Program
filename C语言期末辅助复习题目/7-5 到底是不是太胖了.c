#include<stdio.h>
#include <math.h>
int main()
{   
    int N[20][2];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            /* code */
            scanf("%d",&N[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%.2lf",(double)(((((N[i][0]-100)*0.9)*2)/N[i][1])));
        int t;
        t = ((N[i][0]-100)*0.9)*2;
        if(fabs(N[i][1]-t)<t*0.1)
            printf("You are wan mei!\n");
        else
        {
            if(t<N[i][1])
                printf("You are tai pang le!\n");
            else
            {
                printf("You are tai shou le!\n");
            }
            
        }
        
    }
    

    return 0;
}
