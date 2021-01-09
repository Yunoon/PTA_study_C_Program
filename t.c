#include <stdio.h>
#include <string.h>

int main()
{

    char a[20];

    gets(a);

    for (int i = 0; i < strlen(a); i++)
    {
        /* code */
        if(a[i]>=48 && a[i]<=57)
            a[i] = '$';
    }
    
    puts(a);

    return 0;

}