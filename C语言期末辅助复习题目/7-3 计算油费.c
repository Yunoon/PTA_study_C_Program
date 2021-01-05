#include<stdio.h>
#define you_90 6.95
#define you_93 7.44 
#define you_97 7.93
int main()
{   
    int you_s,you_xh;
    char fs;
    double fs_fy;

    scanf("%d %d %ch",&you_s,&you_xh,&fs);
    fs_fy = (fs=='m'?0.95:0.97);

    if(you_xh==90)
        printf("%.2lf",you_s*you_90*fs_fy);
    else if(you_xh==93)
        printf("%.2lf",you_s*you_93*fs_fy);
    else if(you_xh==97)
        printf("%.2lf",you_s*you_97*fs_fy);

    return 0;
}
