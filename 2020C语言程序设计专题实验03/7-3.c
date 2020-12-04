#include<stdio.h>
#include<math.h>

/*开始被卡了一分，百度发现是不能用数组的问题*/

int main()
{
    int a;
    float b[1000];
    float sum=0;
    float sp=0,tp=0,t;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        /* code */
        // scanf("%f",&b[i]);
        scanf("%f",&t);
        if (t>=0.1 && t<=100)
        {
            /* code */
            sum += 1/t;
        }
    }
    sp = sum/a;
    printf("%.2f\n",1/sp);
    return 0;
}