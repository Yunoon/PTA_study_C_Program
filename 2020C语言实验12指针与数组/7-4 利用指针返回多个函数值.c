#include <stdio.h>
#include <string.h>


void max_min(int *a,int n)
{
    // int *max;
    // int *min;
    int *max = a;
    int *min = a;
    for (int i = 0; i < n; i++,++a)
    {
        /* code */
        if(*max < *a)
            max = a;
        else if(*min > *a)
            min = a;
    }
    printf("max = %d\nmin = %d",*max,*min);
    
}

int main()
{
    int a[10];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    max_min(a,n);
    
    

}
