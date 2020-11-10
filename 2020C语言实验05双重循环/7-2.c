#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        /* code */
        

        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf("%d*%d=%-4d",j,i,j*i);

        }
		
        printf("\n");
    }
    // printf("%d",a[0]);
    
    


    return 0;
}


