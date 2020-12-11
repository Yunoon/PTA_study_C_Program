#include <stdio.h>

int MonthDays(int year, int month);

int main()
{
    int ndays, month, year;

    scanf("%d", &year);
    for(month = 1; month <= 12; month++){
        ndays = MonthDays(year, month);
        printf("%d ",ndays);
    }

    return 0;
}

int MonthDays(int year,int moth)
{
    switch (moth)
    {
    case 1:return 31;break;
    case 2:return (((year%4==0 && year%100!=0)||(year%400==0))?29:28);break;
    case 3:return 31;break;
    case 4:return 30;break;
    case 5:return 31;break;
    case 6:return 30;break;
    case 7:return 31;break;
    case 8:return 31;break;
    case 9:return 30;break;
    case 10:return 31;break;
    case 11:return 30;break;
    case 12:return 31;break;


    
    default:
        break;
    }
    
}