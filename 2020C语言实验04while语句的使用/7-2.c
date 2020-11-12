#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int n,a[10],sum=0,b,count=0;
    scanf("%d",&n);


    while (n>0)
    {
        /* code */
        b = n%10;
        n /=10;
        sum += b;
        count++;
    }
    


    printf("%d %d",count,sum);
    
    


    return 0;
}


