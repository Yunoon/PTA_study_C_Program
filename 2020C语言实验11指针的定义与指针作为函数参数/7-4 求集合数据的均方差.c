#include <stdio.h>
#include <math.h>


int main()
{
    int a[10000];
    int n,sum=0;
    double avg,res=0;
    scanf("%d",&n);    
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        sum += a[i];
    }
    avg = sum*1.0/n;
    double res_sum;
    for (int i = 0; i < n; i++)
    {
        /* code */
        res_sum += pow(a[i]-avg,2);
    }
    printf("%.5lf",sqrt(res_sum/n));
    return 0;
}
