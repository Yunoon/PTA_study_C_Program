#include <stdio.h>

int IsEven(int x);

int main()
{
    int a;
    scanf("%d", &a);
    if (IsEven(a))
    {
        puts("Yes");
    }
    else
    {
        puts("No");
    }
    return 0;
}

int IsEven(int x)//只需要这个部分
{
    if (x % 2 == 1 || x%2 == -1)
    {
        /* code */
        return 0;
    }
    else if (x % 2 ==0)
    {
        /* code */
        return 1;
    }
    
}