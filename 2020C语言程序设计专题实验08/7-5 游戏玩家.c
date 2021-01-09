#include <stdio.h>
#include <math.h>

struct msgs
{
    char num[15];
    char name[40];//将长度调大点
    int res[5];
};

//使用数组结构体，用循环将结构体分别取出，进行判断
int main(){
	int n,count=0;
    struct msgs msg[50];
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d",msg[i].num,msg[i].name,msg[i].res);
    }
    for (int i = 0; i < n; i++)
    {
        if(msg[i].res[0]>=90)
        {
            printf("%s %s S\n",msg[i].num,msg[i].name);
            count++;
        }
        else if(msg[i].res[0]>=80 &&msg[i].res[0]<90)
        {
            printf("%s %s N\n",msg[i].num,msg[i].name);
        }
        else if(msg[i].res[0]>=70 &&msg[i].res[0]<80)
        {
            printf("%s %s G\n",msg[i].num,msg[i].name);
        }
        else if(msg[i].res[0]<70)
        {
            printf("%s %s C\n",msg[i].num,msg[i].name);
            
        }
    }
    printf("%d",count);
    
	return 0;
}