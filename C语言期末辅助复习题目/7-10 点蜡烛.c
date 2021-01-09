#include<stdio.h>
#include <math.h>

int rec(int n)
{
    if(n==1)
        return 1;
    else
    {
        return n+rec(n-1);
    }
    
}

int main()
{   
    int n;
    int day[10000][2];
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            scanf("%d",&day[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        int t=day[i][1];
        printf("%d %d\n",i+1,rec(t)+t);
        
    }
    


    return 0;
}
