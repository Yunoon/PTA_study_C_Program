#include<stdio.h>



int judge(int n)
{
 int i;
 for (i = 2; i < n; i++)
  if (n%i == 0)break;
 if (i < n) return 0;
 else return 1;
}



int main()
{
 int judge(int n);
 int m, i, count = 0;
 scanf("%d", &m);
 for ( i = m-1; i > 1; i--)
 {
  if(judge(i))
  {
   printf("%6d", i);
   count++;
  }
    // for (int j = 2; j < i; j++)
    // {
    //     /* code */
    //     if (i%j==0)
    //     {
    //         /* code */
    //         continue;
    //     }
    //     else if (j%i)
    //     {
    //         /* code */
    //         continue;
    //     }
    //     else
    //     {
    //         printf("%6d", i);
    //         count++;
    //     } 
        
    // }
    
  if (count == 10)break;
 }
}