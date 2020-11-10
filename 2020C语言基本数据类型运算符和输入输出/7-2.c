#include<stdio.h>
int main()
{
	int cm,foot,inch;
    //printf("Please Input cm: ");
    scanf("%d",&cm);
    foot = cm/30.48;
    inch = ((cm/30.48) - foot)*12;
    printf("%d %d",foot,inch);
    return 0;
}