#include<stdio.h>
#include<math.h>


int main()
{   
    
    int a[55];
    int num=0;
    scanf("%d",&num);
    for (int  i = 0; i < num; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < num/2; i++)
    {
        /* code */
        // int t=0;
        // t = (i != num/2?(num)-((num/2)%i):(num/2)+1);

        printf("%d %d\n",a[i],a[num-i]);//倒数公式为num-1-i
    }

    return 0;
}