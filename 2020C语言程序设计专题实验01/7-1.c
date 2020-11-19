#include <stdio.h>
/*简单记数*/

int main(){
    int n=0;
    int count=0;
    int temp;

    scanf("%d",&n);
    while (n>0)
    {
        /* code */
        temp = n%10;
        n /= 10;
        if (temp == 7)
        {
            /* code */
            count++;
        }
        
    }
    printf("%d",count);
    

    return 0;
    
}