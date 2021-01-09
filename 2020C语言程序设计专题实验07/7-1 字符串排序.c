#include <stdio.h>


void swap(char *src, char *dst)
{
    char temp;
    int i=0;
    while (*(src+i)!='\0' || *(dst+i)!='\0')
    {
        temp = *(src+i);
        *(src+i) = *(dst+i);
        *(dst+i) = temp;
        i++;
    }
    
}

int main()
{

    char a[3][30];
    gets(a[0]);
    gets(a[1]);
    gets(a[2]);
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3-1-i; j++)
        {
            if(a[j][0]>a[j+1][0])
                swap(a[j],a[j+1]);
        }
           
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("%s\n",a[i]);
    }
    

    return 0;

}