#include <stdio.h>

int main(void) {
    char temp;

    temp = getchar();//获取键盘输入值
    while (temp >= '0'&&temp <= '9') //判断值的大小
    {
        printf("%c ", temp);
        temp = getchar();
    }
    printf("\n");

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int a[100],l;
//     long n,temp;
//     scanf("%ld",&n);
//     temp = n;
//     for (l = 0; temp > 0; l++)
//     {
//         /* code */
//         temp /= 10;
//     }
//     temp = n;
//     for (int i = l-1; i >= 0; i--)
//     {
//         /* code */
//         a[i] = temp %10;
//         temp /= 10;
//     }
//     for (int i = 0; i < l; i++)
//     {
//         /* code */
//         printf("%d ",a[i]);
//     }
    
    
// }

