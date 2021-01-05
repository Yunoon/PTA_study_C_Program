#include<stdio.h>
#include <math.h>

char *biao[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
void py(n)
{   
    int temp=n;
    int a[1000000],l;
    for (l = 0;temp>0; l++)
    {
        temp /=10;
    }
    temp =n;
    for (int i = l-1;i>=0; i--)
    {
        /* code */
        a[i]=temp % 10;
        temp /=10;
    }
    printf("%s",biao[a[0]]);
    for (int i = 1; i < l; i++)
    {
        /* code */
        printf(" %s",biao[a[i]]);
    }
    
    
    
}

int main()
{   
    int n;
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("fu ");
        py(n*-1);
    }
    else
    {
        py(n);
    }
    
    

    return 0;
}
