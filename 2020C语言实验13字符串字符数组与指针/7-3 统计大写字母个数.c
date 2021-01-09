#include <stdio.h>
#include <string.h>

int main()
{

    char a[2000];
    int count[26]={0};
    gets(a);

    for (int i = 0; i < strlen(a); i++)
    {
        /* code */
        if(a[i]>='A' && a[i]<='Z')
          count[a[i]-64-1]++;  

    }
    // printf("%d",count[0]);
    for (int i = 0; i < 26; i++)
    {
        /* code */
        printf("%d ",count[i]);
    }
    

    return 0;

}