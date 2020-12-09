#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double student_core[100][10]={0};//设置了学生成绩全局变量表
int student_core_zhenshu[100][10]={0};//定义一个int类型的成绩表
int student_num=0;//设置了全局变量的学生人数


int zhenshu(double core)//四舍五入函数
{
    core = core + 0.5;//在原基础上+0.5，在int就可以实现四舍五入
    return (int)core;
}

int random_student()//随机生成学生成绩表
{
    printf("\n以下是随机生成的成绩单\n");
    for (int i = 0; i < student_num; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            /* 使用了rand()函数,可生成0-5以内的浮点成绩 */
            double temp=0;
            temp = 1.0*rand()/RAND_MAX *(5-0)+0;
            student_core[i][j] = temp;
            printf("%.1lf ",student_core[i][j]);
        }
        for (int j = 2; j < 8; j++)
        {
            /* 使用了rand()函数,可生成0-10以内的浮点成绩 */
            double temp=0;
            temp = 1.0*rand()/RAND_MAX *(10-0)+0;
            student_core[i][j] = temp;
            printf("%.1lf ",student_core[i][j]);
        }
        for (int j = 8; j < 10; j++)
        {
            /* 使用了rand()函数,可生成0-15以内的浮点成绩 */
            double temp=0;
            temp = 1.0*rand()/RAND_MAX *(15-0)+0;
            student_core[i][j] = temp;
            printf("%.1lf ",student_core[i][j]);
        }
        printf("\n");
    }
    
}

int core_quzhen()//第一问
{
    printf("\n第一问：以下是将成绩单进行了四舍五入结果后的成绩单\n");
    for (int i = 0; i < student_num; i++)//用双重循环将二维数组值取出
    {
        for (int j = 0; j < 10; j++)
        {
            //调用了四舍五入函数zhenshu,并对整数成绩表进行赋值，然后输出
            student_core_zhenshu[i][j] = zhenshu(student_core[i][j]);
            printf("%d ",student_core_zhenshu[i][j]);
        }
        printf("\n");
    }
}

int core_tongji()//第二问
{
    printf("\n第二问：以下是将每位同学的成绩进行了统计后的结果：\n");
    for (int i = 0; i < student_num; i++)
    {
        int sum_base=0,sum_hard=0,sum_too_hard=0;//每一次循环初始化一次成绩
        for (int j = 0; j < 4; j++)//统计基础题分数
        {
            sum_base += student_core_zhenshu[i][j];
        }
        for (int k = 4; k < 8; k++)//统计进阶题分数
        {
            sum_hard += student_core_zhenshu[i][k];
        }
        for (int l = 8; l < 10; l++)//统计较难题分数
        {
            sum_too_hard += student_core_zhenshu[i][l];
        }
        printf("第%d个同学的基础成绩为：%d、进阶成绩为：%d、较难成绩为：%d、总成绩为：%d\n",i+1,sum_base,sum_hard,sum_too_hard,sum_base+sum_hard+sum_too_hard);//输出结果
    }
}

int core_ruxuan()//第三问
{
    printf("\n第三问：以下是将每位同学的成绩进行了统计后，筛选出入选同学的结果：\n");
    for (int i = 0; i < student_num; i++)
    {
        int sum_base=0,sum_hard=0,sum_too_hard=0;//每一次循环初始化一次成绩
        for (int j = 0; j < 4; j++)//统计基础题分数
        {
            sum_base += student_core_zhenshu[i][j];
        }
        for (int k = 4; k < 8; k++)//统计进阶题分数
        {
            sum_hard += student_core_zhenshu[i][k];
        }
        for (int l = 8; l < 10; l++)//统计较难题分数
        {
            sum_too_hard += student_core_zhenshu[i][l];
        }
        if ((sum_base >=20 && sum_hard>=20) || (sum_base >=10 && sum_hard+sum_too_hard>=45))
        {
            printf("第%d位同学入选了，TA的总分是%d\n",i+1,sum_base+sum_hard+sum_too_hard);
        }   
    }
}

int main()
{
    int a;
    double core;

    printf("请输入学生人数(至少10人)，学生成绩将自动生成\n");        
    scanf("%d",&student_num);//读取学生人数
    random_student();//生成成绩表
    core_quzhen();//第一问答案
    core_tongji();//第二问答案
    core_ruxuan();//第三问答案

    return 0;
}