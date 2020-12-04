#include<stdio.h>
#include<math.h>



int main()
{
    int x,y,z;

    scanf("%d %d",&y,&z);

    for (int i = 0; i < 100; i++)
    {
        /* code */
        if(i%3==1 && i%5==z && i%7==3)
        {
            printf("%d",i+y);
        }
    }
    


    return 0;
}