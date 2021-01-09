#include <stdio.h>
#include <string.h>

int main()
{

    char a[2000];

    gets(a);

    for (int i = 0; i < strlen(a); i++)
    {
        /* code */
        if(a[i]>='A' && a[i]<='Z')
            a[i] +=32;
        else if(a[i]>='a' && a[i]<='z')
            a[i] -= 32;
        else if(a[i]>=48 && a[i]<=57)
            a[i] +=1;
    }
    
    puts(a);

    return 0;

}