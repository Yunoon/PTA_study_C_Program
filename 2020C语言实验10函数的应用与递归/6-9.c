#include <stdio.h>
int fun(int n);
int main()
{
 printf("s=%d\n",fun(855));
 return 0;
 }


int fun(int n)
{
    int s=0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        if (n % i ==0)
        {
            /* code */
            s += i;
        }
        
    }
    return s;
    
    
    
}