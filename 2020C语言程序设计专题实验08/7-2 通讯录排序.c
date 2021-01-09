#include <stdio.h>
#include <math.h>

struct msgs
{
    char name[50];
    int birth[2];
    char phone[50];
};

//使用数组结构体，用循环将结构体分别取出，用冒泡排序法排序
int main(){
	int n;
    struct msgs msg[50];
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %s",msg[i].name,msg[i].birth,msg[i].phone);
    }
    struct msgs msg_temp;

	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j< n-1-i;j++)
		{
            if(msg[j].birth[0]>msg[j+1].birth[0])
            {
                msg_temp = msg[j+1];
                msg[j+1] = msg[j];
                msg[j] = msg_temp;
                
            }
		}
	}

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%s %d %s\n",msg[i].name,msg[i].birth[0],msg[i].phone);

    }
    
    
	return 0;
}