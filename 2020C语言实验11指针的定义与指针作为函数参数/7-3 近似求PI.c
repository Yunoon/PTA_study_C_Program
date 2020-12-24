#include <stdio.h>
double is(int);//这是一个求阶层 
double rr(int);//这是一个求分母 
int main()//
{
 double eps;
 double s=0;double d;
 
 scanf("%le",&eps);
 
 for(int i=0;i<=999999;i++) 
 {
  d=1.0*is(i)/rr(2*i+1);
  s=s+d;
  if(d<eps)
  break;
 }
 
 printf("PI = %.5lf",2.0*s);
 return 0;
 } 
 
 double is(int m)//阶层 
 {
  double s=1.0;
  for(int i=1;i<=m;i++) 
  {
   s=1.0*s*i;
  }
  
  return s;
 }
 
 double rr(int m)
 {  
  double s=1;
  for(int i=1;i<=m;i=i+2)
  {
   s=s*i;
  }
  
  return s;
  } 