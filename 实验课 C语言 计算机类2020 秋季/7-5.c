#include<stdio.h>


/*简单转换*/
int main()
{
    int a=0,b=0,c=0,d=0,shu=0,zhu[4];
    // int count_j=0,count_o=0;
    // scanf("%d%d%d%d",&a,&b,&c,&d);
    scanf("%d",&shu); 
    for (int i = 0; i < 4; i++)
    {
        /* code */
        zhu[i] = shu %10;
        shu /= 10;
    }
    
    zhu[3] = (zhu[3]+9)%10;
    zhu[2] = (zhu[2]+9)%10;
    zhu[1] = (zhu[1]+9)%10;
    zhu[0] = (zhu[0]+9)%10;
        
    printf("The encrypted number is %d%d%d%d",zhu[1],zhu[0],zhu[3],zhu[2]);
    
    return 0;
}
