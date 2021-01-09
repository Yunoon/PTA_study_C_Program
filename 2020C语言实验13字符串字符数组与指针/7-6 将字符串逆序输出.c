#include <stdio.h>
#include <string.h>

int main()
{

    char a[2000]={0};
    int count=0;
    int frezz=0;
    char n;
    gets(a);
    for (int i = strlen(a)-1; i >=0 ; i--)
    {
        /* code */
        printf("%c",a[i]);
    }

    

    return 0;

}
