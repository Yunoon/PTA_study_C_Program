#include <stdio.h> 
int number[10000000];  
int main()     
{
    int i,n,ii,j,temp;
    scanf("%d",&n);   
    for(int j=0;j<n;j++)    
        scanf("%d",&number[j]) ;
    for (j=0;j<n-1;j++)//冒泡排序   
    {                            
        for (ii=0;ii<n-1-j;ii++)
        {
            if(number[ii]>number[ii+1])
            {
                temp=number[ii];     
                number[ii]=number[ii+1];    
                number[ii+1]=temp;
            }
            
        }
        for (i=0;i<n;i++)   
            printf("%d ",number[i]);
        printf("\n");                           
        // printf("%d\n",number[i]);
    }    
    // for (i=0;i<n-1;i++)   
    //     printf("%d ",number[i]);                           
    // printf("%d\n",number[i]);
    return 0;
}