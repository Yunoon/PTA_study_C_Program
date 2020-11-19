#include<stdio.h>
int main()
{
    int a,b,c,d,m,n,i=0,j=0,k=0,sum;
    scanf("%d %d",&m,&n);
    for(sum=0;m<=n;m++)
    {
        a=m;
        while(k>0)
        {
            if(a%2==0)
                i++;
            a/=10;
            k++;
        }
        if(i==k)
            sum+=m;
        i=0;
        k=0;
    }
    printf("%d\n",sum);
    return 0;
}
