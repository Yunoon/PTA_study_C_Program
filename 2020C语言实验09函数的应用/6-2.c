#include <stdio.h>

int IsMultiple(int x, int y);


int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (IsMultiple(x, y))
    {
        puts("Yes");
    }
    else
    {
        puts("No");
    }
    return 0;
}

int IsMultiple(int x, int y)//0 0是洛必达法则，其余y=0均不行
{   
    if (y==0 && x==0)
    {
        return 1;
    }
    else if (y==0 && x!=0)
    {
        /* code */
        return 0;
    }
    
    
    if(x % y ==0)
        return 1;
    else
        return 0;
}