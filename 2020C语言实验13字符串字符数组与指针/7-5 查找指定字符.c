// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char a[2000]={0};
//     int count=0;
//     int frezz=0;
//     char n;
//     scanf("%ch",&n);
//     getchar();
//     gets(a);
//     for (int i = 0; i < strlen(a); i++)
//     {
//         /* code */
//         if(a[i]==n)
//             count = i;
//             frezz =1;
//     }
//     if(frezz)
//         printf("index = %d",count);

//     else
//     {
//         printf("Not Found");
//     }
    

    

//     return 0;

// }
#include <stdio.h>
int main()
{
	int i, index, count;
	char a, ch, str[80];
	scanf("%c\n", &a);
	i=0;
	index=-1;
	count=0;
	ch=getchar();
	for(i=0; ch!='\n'; i++){
		str[i]=ch;
		count++;
		ch=getchar();
	}
	for(i=0; i<count; i++)
		if(a==str[i])
			index=i;
		if(index!=-1)
			printf("index = %d", index);
		else
			printf("Not Found");
			
	return 0;
}