/*模拟题最后一题
#include<stdio.h>
int fibonaccia_mu(int n) {
   if (n == 1)
       return 1;
   else if(n==2)
       return 2;
   return fibonaccia_mu(n - 1) + fibonaccia_mu(n - 2);
}

int fibonaccia_zi(int n){
   if (n == 1)
       return 2;
   else if(n==2)
       return 3;
   return fibonaccia_zi(n - 1) + fibonaccia_zi(n - 2);
}

int main()
{
   int t;
   double sum=0.0;
   scanf("%d",&t);
   for (int i=1; i<=t; i++) {
//        printf("mu:%d\n",fibonaccia_mu(i));
//        printf("zi:%d\n\n",fibonaccia_zi(i));
       sum += (double)fibonaccia_zi(i)/(double)fibonaccia_mu(i);
   }
   printf("%.4lf\n", sum);

   return 0;
}*/


/* 模拟题函数题第二题
#include <stdio.h>

int fun ( float *s, int n, float *aver );

int main()
{   float a,s[30],aver;
    int m = 0;
    scanf("%f",&a );
    while( a>0 )
    {
        s[m] = a;
        m++;
        scanf ( "%f", &a );
    }
    printf( "The number of students : %d\n" , fun ( s, m, &aver ));
    printf( "ave=%.2f\n",aver );
    return 0;
}

int fun( float *s, int n, float *aver )
{
    int count=0;
    float *m;
    
    m=s;
    double sum=0.0;
    for (int i=0; i<n; i++,m++) {
        sum += *m;
    }
    *aver = sum/(n*1.0);
    m=s;
    for (int i=0; i<n; i++,m++) {
        if (*m >= *aver) {
            count++;
        }
    }
    
    return count;
}
*/