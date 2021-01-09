#include<stdio.h>
#include<string.h>
int main()
{
 int a[100] = {0};
 char b[20];
 int temp=0;
 while(temp!=2)
 {
    if (temp == 1)
    {
       printf("\n");
    }
    gets(b);
    int i, c = 0;
    c = strlen(b);
    for(i = 0; i < 20; i++)
    {
      a[i] = b[i] - '0';
    }
    if(c != 18)
    {
       printf("Invalid data,input again!");
       temp = 1;
    }
    else
    {
     for (i = 6; i < 10; i++)
     {
      printf("%d", a[i]);
     }
     printf(",");
     for (i = 10; i < 12; i++)
     {
      printf("%d", a[i]);
     }
     temp=2;
    }
    
 }
 
}