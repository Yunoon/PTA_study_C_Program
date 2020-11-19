#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d;
    int sum=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum  = abs(a-c)+abs(b-d);
    printf("%d",sum);

    return 0;
    
}