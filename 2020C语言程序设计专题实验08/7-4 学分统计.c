#include <stdio.h>
#include <math.h>

struct msgs
{
    char num[15];
    char name[40];
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
        if(msg[i].res[0]>=85)
        {
            printf("%s %s A\n",msg[i].num,msg[i].name);
        }
        else if(msg[i].res[0]>=70 &&msg[i].res[0]<85)
        {
            printf("%s %s B\n",msg[i].num,msg[i].name);
        }
        else if(msg[i].res[0]>=60 &&msg[i].res[0]<70)
        {
            printf("%s %s C\n",msg[i].num,msg[i].name);
        }
        else if(msg[i].res[0]<60)
        {
            printf("%s %s D\n",msg[i].num,msg[i].name);
            count++;
        }
    }
    printf("%d",count);
    
	return 0;
}