#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int zhenshu(double core)
{   //定义一个函数且每一道题的得分四舍五入
    core = core + 0.5;//在原本得到的分数上加上0.5即可实现四舍五入
    return (int)core;
}

int main()
{
    int a;
    double core;
    double cjb_1[10][10]={0};//在此处设置选手成绩全局变量表
    int cjb_2[10][10]={0};//定义一个int类型的成绩表
    system("color f0");
    printf("请输入10个同学的成绩\n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        for (int j = 0; j < 10; j++)
        {
            /* code */
            scanf("%lf",&cjb_1[i][j]);
        }

    }
    printf("\n把每个同学的成绩进行了四舍五入的统计\n");
    for (int i = 0; i < 10; i++)//用双重循环将二维数组值取出
    {
        for (int j = 0; j < 10; j++)
        {
            //调用了四舍五入函数zhenshu,并对整数成绩表进行赋值，然后输出得到结果
            cjb_2[i][j] = zhenshu(cjb_1[i][j]);
            printf("%d ",cjb_2[i][j]);
        }
        printf("\n");
    }
    printf("\n将每个同学的得分情况进行了统计：\n");
    for (int i = 0; i < 10; i++)
    {
        int jichu=0,jinjie=0,jiaonan=0;//每一次循环初始化一次成绩，这里的3个变量也要更名
        for (int j = 0; j < 4; j++)//统计基础题得到的分数
            jichu += cjb_2[i][j];
        for (int k = 4; k < 8; k++)//统计进阶题得到的分数
            jinjie += cjb_2[i][k];
        for (int l = 8; l < 10; l++)//统计较难题得到的分数
            jiaonan += cjb_2[i][l];
        printf("第%d个同学的基础成绩为：%d、进阶成绩为：%d、较难成绩为：%d、总成绩为：%d\n",i+1,jichu,jinjie,jiaonan,jichu+jinjie+jiaonan);//输出结果
    }
    for (int i = 0; i < 10; i++)
    {
        int jichu=0,jinjie=0,jiaonan=0;//每一次循环初始化一次成绩
        for (int j = 0; j < 4; j++)//统计基础题得到的分数
            jichu += cjb_2[i][j];
        for (int k = 4; k < 8; k++)//统计进阶题得到的分数
            jinjie += cjb_2[i][k];
        for (int l = 8; l < 10; l++)//统计较难题得到的分数
            jiaonan += cjb_2[i][l];
        if ((jichu >=20 && jinjie>=20) || (jichu >=10 && jinjie+jiaonan>=45))
            printf("第%d位同学晋级成功了，总分是%d\n",i+1,jichu+jinjie+jiaonan);
    

    return 0;
}
}