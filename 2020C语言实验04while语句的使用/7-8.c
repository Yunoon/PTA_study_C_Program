#include<stdio.h>
#include<math.h>
int main()
{
    int a,n=2,k=1;float limit;
    scanf("%d",&a);
    limit=sqrt(a);
    if(a<=0||a==1){k=0;printf("No");}
    else
    {while(n<=limit)
    {
         
        if(a%n==0)
        {
            k=0;printf("No");
            break;
        }
        n++;
    }
    }
    if(k==1){printf("Yes");}
}
