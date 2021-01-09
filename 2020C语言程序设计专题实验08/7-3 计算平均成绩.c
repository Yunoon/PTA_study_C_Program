#include <stdio.h>
#include <math.h>

struct msgs
{
    char num[10];
    char name[10];
    int res[5];
};

//使用数组结构体，用循环将结构体分别取出，进行判断
int main(){
	int n;
    struct msgs msg[50];
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d",msg[i].num,msg[i].name,msg[i].res);
    }
    int sum=0;
    double aver=0.0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum += msg[i].res[0];
    }
    aver = (double) sum/(n*1.0);

    printf("%.2lf\n",aver);
    for (int i = 0; i < n; i++)
    {
        /* code */
        if((double)msg[i].res[0] < aver)
        {
            printf("%s %s\n",msg[i].name,msg[i].num);
        }
    }
    
	return 0;
}