#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    int x,y;
    float ln;
    scanf("%d %d %d\n%d %d",&a,&b,&c,&x,&y);


    ln = sqrt(pow(a-x,2)+pow(b-y,2));//简单计算，这里要判断ln的类型

    if (ln > c)
    {
        /* code */
        printf("OUT\n");
    }
    else if (ln == c)
    {
        /* code */
        printf("ON\n");
    }
    else
    {
        printf("IN\n");
    }
    // printf("%d",ln);
    
    
    
    



    return 0;
    
}