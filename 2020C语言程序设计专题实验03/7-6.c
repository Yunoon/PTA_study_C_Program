#include<stdio.h>
#include<math.h>



int main()
{
    int a[100]={0};
    int temp=0;
    int count=0;
    for (int i = 0; i<100; i++)//读取值
    {
        /* code */
        scanf("%d",&a[i]);
        count++;//统计输入的数的个数
        if (a[i]<0)
        {
            /* code */
            break;
        }
        
        
    }
    for (int i = 1; i < count-1; i++)//选择排序
    {
        /* code */
        for (int j = 0; j < count-1; j++)
        {
            /* code */
            
            if (a[i] > a[j])
            {
                /* code */
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }

    if(count-1 > 2)//最高成绩有3人以上
    {   
        printf("%d",a[0]);
        for (int i = 1; i < 3; i++)
        {
            /* code */
            printf(" %d",a[i]);
        }
    }
    else if(count-1 == 2)//最高成绩有2人
    {   
        printf("%d",a[0]);
        printf(" %d #",a[1]);
    }
    else if(count-1 == 1)//最高成绩有1人
    {   
        printf("%d",a[0]);
        printf(" # #");
    }
    else//最高成绩为0
    {
        printf("# # #");
    }


    return 0;
}