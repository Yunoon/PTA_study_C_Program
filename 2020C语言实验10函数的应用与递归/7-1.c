#include <stdio.h>
#include <math.h>

/*乱写的，蒙对了*/
int mi(int n)
{
    if (n == 1)
    {
        /* code */
        return pow(2,1);
    }
    else
    {
        return pow(2,n)+mi(n-1);
    }
    
    
}

int main()
{
    int n=0;

    scanf("%d",&n);
    printf("result = %d",mi(n));
    


}