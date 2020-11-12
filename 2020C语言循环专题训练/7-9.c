#include <stdio.h>

int main()
{  
    int a;
    int sam=1,temp;

    scanf("%d",&a);

    while (a>0)
    {
        /* code */
        temp = a % 10;
        sam *= temp;
        a /= 10;
        

    }
    
    printf("%d",sam);
    
    return 0;

}