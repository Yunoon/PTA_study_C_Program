#include <stdio.h>
#include <math.h>


int find(int arr[15],int len,int tag)
{
    int left=0,right=len-1;
    int mid;
    while (left<=right)
    {
        /* code */
        mid = (left+right)/2;
        if (arr[mid]==tag)
        {
            return mid;
        }
        if (arr[mid < tag])
        {
            /* code */
            left = mid+1;
        }
        else
        {
            right = mid+1;
        }
        
    }
    return -1;
    
}


int main()
{
    int a[15];
    int n;
    int b;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);

    int t = find(a,n,b);
    if (t >=0)
    {
        printf("It's position is %d!",t+1);
    }
    else
    {
        printf("No data!");
    }
    
    

    
    return 0;
}