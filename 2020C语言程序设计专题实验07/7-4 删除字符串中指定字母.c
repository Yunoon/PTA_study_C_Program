#include <stdio.h>


int main()
{

    char a[100]={0};
    gets(a);
    for (int j = 0; j < 100; j++)
    {
        /* code */
        for (int i = 0; i < 100; i++)
        {
            /* code */
            if(a[i]=='a')
            while (a[i]!=0)
            {
                /* code */
                int j=i;
                a[i++]=a[++j];
            }
        }
        
        
            
    }
    puts(a);
        

    return 0;

}