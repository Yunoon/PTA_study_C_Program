#include <stdio.h>

int main()
{
    int a[100][6],b[100]={0};//使用b来存储值
    int m,n;
    int sum=0;
    scanf("%d %d",&m,&n);

    for (int i = 0; i < m; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
            sum += a[i][j];//把同一层的值相加，a[0][1]+a[0][2].....
        }
        b[i] = sum;//存储相加后的值
        sum = 0;//将值初始化，继续下一层
    }
        
    for (int i = 0; i < m; i++)
    {
        /* code */
        printf("%d\n",b[i]);
    }
        

}