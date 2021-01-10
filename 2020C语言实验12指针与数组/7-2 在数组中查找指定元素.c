#include <stdio.h>
#include <string.h>

int main()
{
    int a[10];
    int n;
    scanf("%d",&n);
    int res[10]={0};
    for (int i = 0; i < n; i++)
    {
        /* code */
        int t[10];
        int num=0;
        scanf("%d",&num);
        for (int j = 0; j < num; j++)
        {
            /* code */
            scanf("%d",&t[j]);
        }
        int find;
        scanf("%d",&find);
        for (int k = 0; k < n; k++)
        {
            /* code */
            if(t[k]==find)
                res[i]=k+1;
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(res[i]!=0)
            printf("index = %d\n",res[i]-1);
        else
        {
            printf("Not found\n");
        }
        
    }   
    
    
    
    

}
