#include <stdio.h>

int main()
{  
    float n=0,m=0;
    int count=1;
    float x1,x2;


    scanf("%f %f",&n,&m);

    x1 = n/2;
    x2 = 0.5*(x1+(n/x1));
    while ((x1-x2)>m)
    {
        /* code */
        x1 = x2;
        x2 = 0.5*(x1+(n/x1));

        count++;
    }
    
    printf("%.4lf",(x1+x2)*0.5);



    printf(" %d",count);
    
    return 0;

}