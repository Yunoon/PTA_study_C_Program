#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));

    return 0;
}


int search(int n)
{
    int count=0;
    for (int i = 101; i < n; i++)
    {
        /* code */
        int res=0;
        int first=0,second=0,thrid=0;
        thrid = i%10;
        second = (i/10)%10;
        first = (i/100)%10;
        if (first == second || first == thrid || second==thrid)
        {
            /* code */
            int t=0;
            t = sqrt(i);
            if (t*t==i)
            {
                /* code */
                count++;
            }
        }
        

        
    }
    return count;
    
}