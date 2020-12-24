#include <stdio.h>


int main(void)
{
    //这里没有使用指针，运用了存储数组下标的方式
    int n,a[100],ji[50],ou[50],num_ji=0,num_ou=0; 
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (i%2==1)
        {
            ji[num_ji]=i;
            num_ji++;
        }
        if (i%2==0)
        {
            ou[num_ou]=i;
            num_ou++;
        }
    }
    //想数组下标打印出来
    for (int i = 0; i < num_ou; i++)
    {
        /* code */
        printf("%d ",a[ou[i]]);
    }  
    printf("\n");
    for (int i = 0; i < num_ji; i++)
    {
        /* code */
        printf("%d ",a[ji[i]]);
    }

    return 0;
}