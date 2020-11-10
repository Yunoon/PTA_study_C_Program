#include <stdio.h>
 
int main ()
{
   int today,next_twoday1,next_twoday2;
   scanf("%d",&today);
   if(today+2>7)
   {
       next_twoday1 = today+2;
       next_twoday2 = next_twoday1%7;
       printf("%d\n",next_twoday2);
   }
   else
   {
       next_twoday2 = today + 2;
       printf("%d\n",next_twoday2);
   }
   return 0;
   
}