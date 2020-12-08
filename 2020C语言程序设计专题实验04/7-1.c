#include<stdio.h>
#include<math.h>
//a的单位是吨，一粒麦子是0.1g
int main()
{
    int a;
    int count=0;
    int i=0;
    long long sum=0;//麦子的总数量，单位为0.1g
    scanf("%d",&a);
    for (i = 0; i < 64; i++)
    {
        /* code */
        sum += (long long) pow(2,i);
        if (sum >= a*10000000)
        {
            /* code */
            i++;
            break;
        }
        
        
    }
    // printf("%lld",(long long) pow(2,63));
    printf("%d",i);
    
    

    return 0;
}