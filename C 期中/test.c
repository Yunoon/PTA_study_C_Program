#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int zhenshu(double core)
{   //����һ��������ÿһ����ĵ÷���������
    core = core + 0.5;//��ԭ���õ��ķ����ϼ���0.5����ʵ����������
    return (int)core;
}

int main()
{
    int a;
    double core;
    double cjb_1[10][10]={0};//�ڴ˴�����ѡ�ֳɼ�ȫ�ֱ�����
    int cjb_2[10][10]={0};//����һ��int���͵ĳɼ���
    system("color f0");
    printf("������10��ͬѧ�ĳɼ�\n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        for (int j = 0; j < 10; j++)
        {
            /* code */
            scanf("%lf",&cjb_1[i][j]);
        }

    }
    printf("\n��ÿ��ͬѧ�ĳɼ����������������ͳ��\n");
    for (int i = 0; i < 10; i++)//��˫��ѭ������ά����ֵȡ��
    {
        for (int j = 0; j < 10; j++)
        {
            //�������������뺯��zhenshu,���������ɼ�����и�ֵ��Ȼ������õ����
            cjb_2[i][j] = zhenshu(cjb_1[i][j]);
            printf("%d ",cjb_2[i][j]);
        }
        printf("\n");
    }
    printf("\n��ÿ��ͬѧ�ĵ÷����������ͳ�ƣ�\n");
    for (int i = 0; i < 10; i++)
    {
        int jichu=0,jinjie=0,jiaonan=0;//ÿһ��ѭ����ʼ��һ�γɼ��������3������ҲҪ����
        for (int j = 0; j < 4; j++)//ͳ�ƻ�����õ��ķ���
            jichu += cjb_2[i][j];
        for (int k = 4; k < 8; k++)//ͳ�ƽ�����õ��ķ���
            jinjie += cjb_2[i][k];
        for (int l = 8; l < 10; l++)//ͳ�ƽ�����õ��ķ���
            jiaonan += cjb_2[i][l];
        printf("��%d��ͬѧ�Ļ����ɼ�Ϊ��%d�����׳ɼ�Ϊ��%d�����ѳɼ�Ϊ��%d���ܳɼ�Ϊ��%d\n",i+1,jichu,jinjie,jiaonan,jichu+jinjie+jiaonan);//������
    }
    for (int i = 0; i < 10; i++)
    {
        int jichu=0,jinjie=0,jiaonan=0;//ÿһ��ѭ����ʼ��һ�γɼ�
        for (int j = 0; j < 4; j++)//ͳ�ƻ�����õ��ķ���
            jichu += cjb_2[i][j];
        for (int k = 4; k < 8; k++)//ͳ�ƽ�����õ��ķ���
            jinjie += cjb_2[i][k];
        for (int l = 8; l < 10; l++)//ͳ�ƽ�����õ��ķ���
            jiaonan += cjb_2[i][l];
        if ((jichu >=20 && jinjie>=20) || (jichu >=10 && jinjie+jiaonan>=45))
            printf("��%dλͬѧ�����ɹ��ˣ��ܷ���%d\n",i+1,jichu+jinjie+jiaonan);
    

    return 0;
}
}