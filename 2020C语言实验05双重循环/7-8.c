#include<stdio.h>
int main(){
	int i=2,k;
	scanf("%d",&k);
	printf("%d=",k);//打印出预先值
	while(k>1){
	
		if(k%i==0)//判断是否可以取余,可以则打印出可以取余的值
		{
			printf("%d",i);k/=i;
			if(k!=1)
			{
				printf("*");
			}
		}
		else 
		{
			i++;
		}//取余失败则把取余值加1
	}
}