#include<stdio.h>
#include<math.h>

/*一步一步来，先筛选出最大值作比较，用count来进行最终判断*/

int main()
{
    int a[7];
    int count = 0,max=0,boom_num=0;
    for (int i = 1; i < 7; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    max = a[1];
    for (int i = 1; i < 5; i++)
    {
        /* code */
        if (a[i] > max)
        {
            /* code */
            max = a[i];
        }
        
    }
    for (int i = 1; i < 5; i++)
    {
        /* code */
        if ((max - a[i]) > a[6] || a[i]<a[5])
        {
            /* code */
            count++;
            boom_num = i;
        }
        
    }

    if (count==0)
    {
        printf("Normal");
    }
    else if (count == 1)
    {
        /* code */
        printf("Warning: please check #%d!",boom_num);
    }
    else if (count >= 2)
    {
        /* code */
        printf("Warning: please check all the tires!");
    }
    
    return 0;
}