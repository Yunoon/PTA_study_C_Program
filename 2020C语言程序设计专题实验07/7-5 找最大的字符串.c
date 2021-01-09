#include <stdio.h>
#include <string.h>

int main()
{

    char a[5][100]={0};
    for (int i = 0; i < 5; i++)
    {
        /* code */
        gets(a[i]);
    }
    char max[100];
    strcpy(max,a[0]);
    for (int i = 1; i < 5; i++)
    {
        /* code */
        int t;
        t = strcmp(max,a[i]);
        if(t<0)
            strcpy(max,a[i]);  
    }
    
    printf("Max is: %s\n",max);
        

    return 0;

}