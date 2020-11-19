#include <stdio.h>


int main(){
    float a,b,bmi;

    scanf("%f %f",&a,&b);
    bmi = 1.0*a/(b*b);
    if (bmi < 18.5)
    {
        /* code */
        printf("偏瘦");
    }
    else if (bmi>=18 && bmi<24)
    {
        /* code */
        printf("正常");
    }
    else if (bmi>=24 && bmi<28)
    {
        /* code */
        printf("偏胖");
    }
    else if (bmi>=28 && bmi<40)
    {
        /* code */
        printf("肥胖");
    }
    else if (bmi>=40)
    {
        /* code */
        printf("极重度肥胖");
    }
    // printf("%f",bmi);

    return 0;
    
}