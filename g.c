#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int c=1;
    int x=0,y=0,k=0;
    int a[n+1][n+1];
    while(k<n-1)
    {
        if(k<n-1)//前下
        {
            a[x][++y]=++c;
            while(y!=0)
            {
                a[++x][--y]=++c;
            }
            ++k;
        }
        if(k<n-1)//前上
        {
            a[++x][y]=++c;
            while(x!=0)
            {
                a[--x][++y]=++c;
            }
            ++k;
        }
    }

    if(x==0)
    {
        while(k<2*n-3)
        {
            if(k<2*n-3)
            {
                a[++x][y]=++c;
                while(x<n-1)
                    a[++x][--y]=++c;
                ++k;
            }
            if(k<2*n-3)
            {
                a[x][++y]=++c;
                while(y<n-1)
                    a[--x][++y]=++c;
                ++k;
            }
        }
    }
     if(y==0)
    {
        while(k<2*n-3)
        {
            if(k<2*n-3)
            {
                a[x][++y]=++c;
                while(y<n-1)
                    a[--x][++y]=++c;
                ++k;
            }
            if(k<2*n-3)
            {
                a[++x][y]=++c;
                while(x<n-1)
                    a[++x][--y]=++c;
                ++k;
            }
        }
    }



    a[0][0]=1;
    a[n-1][n-1]=n*n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    return 0;
}
