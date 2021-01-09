#include<stdio.h>
#include <string.h>
#include <math.h>

int main()
{   
    char n[50];
    int count=1;

    gets(n);
    for (int i = 0; i < strlen(n); i++)
    {
        if(n[i]==32 && n[i+1]!=32 &&n[i-1]!=32)
            count++;
    }
    printf("%d",count);
    return 0;
}
