#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int n,a[10];
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        if (a[0]<=a[i])
        {
            /* code */
            a[0] = a[i];
        }

    }
    printf("%d",a[0]);
    
    


    return 0;
}


