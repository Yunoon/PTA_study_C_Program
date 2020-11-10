#include<stdio.h>
int main(){
	

	int a,b,sum;
	while (1)
    {
        /* code */
        scanf("%d",&a);
        if (a<=0)
        {
            /* code */
            break;
        }
        else
        {
            if (a%2==1)
            {
                /* code */
                sum+=a;
            }
            else
            {
                continue;
            }
               
        }
        
        
    }
    printf("%d",sum);    
    


}