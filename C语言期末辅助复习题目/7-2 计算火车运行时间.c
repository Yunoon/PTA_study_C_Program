#include<stdio.h>
int main()
{
     int a,b,c,d,e,f,g,h; 
     
      scanf("%d %d",&a,&b);
      
       c=a/100; d=b/100;
       
       e=a%100; f=b%100;g=f-e;
       
      if(c==d&&e==f)
      
       printf("00:00");
       
      else if(g<0)
       {
       h=d-c-1;
       printf("%02d:%02d",h,60-e+f);
       }
      else if(g<60)
      {
      h=d-c;
      printf("%02d:%02d",h,g);
      } 
     return 0;
}
