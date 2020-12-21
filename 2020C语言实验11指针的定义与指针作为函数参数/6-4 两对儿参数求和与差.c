#include <stdio.h>

void plusandminus( int  a, int  b, int * c , int  * d );

int main()
{
    int a,b,c=0,d=0;
    scanf("%d%d",&a,&b);

    plusandminus( a,  b,  &c , &d );//此处调用 plusandminus 函数
    printf("%d %d\n" , c , d  ); //
    return 0;
}

/* 在调试代码时候，你应该在这里完成函数的定义部分的代码，调试好之后提交这段代码 */

void plusandminus( int  a, int  b, int * c , int  * d )
{
    *c = a+b;
    *d = a-b;
}