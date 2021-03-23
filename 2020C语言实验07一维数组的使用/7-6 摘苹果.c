#include <stdio.h>
//原题，循环专题7-6
int main()
{
    int a[1000],n,m;
    int count;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (m+30>=a[i] && a[i]>=100 && a[i]<=200)
        {
            /* code */
            count++;
        }
        
    }
    printf("%d",count);
    
    
    
}