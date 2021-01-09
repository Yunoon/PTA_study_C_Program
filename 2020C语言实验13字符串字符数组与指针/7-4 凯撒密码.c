// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char a[2000]={0};
//     int count[26]={0};
//     int n;
//     gets(a);
//     scanf("%d",&n);
//     for (int i = 0; i < strlen(a); i++)
//     {
//         /* code */
//         if(n>0 && a[i]!=0 && a[i]!=32)
//             a[i] += n;
//         else if(n < 0 && a[i]!=0 && a[i]!=32)
//             a[i] += n;
//     }

//     puts(a);

//     return 0;

// }

#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,i,k;
	char ch1[100]={0};
	gets(ch1);
	scanf("%d",&n);
	n = n%26; 
	int len1 = strlen(ch1);
	for(i=0;i<len1;i++)
	{
		if(ch1[i]>='a'&&ch1[i]<='z')
		{
		  	if(n>=0) ch1[i] = ((ch1[i]-'a') + n)%26+'a';
			else if(n<0) ch1[i] = ((ch1[i]-'a') + n+26)%26+'a';
		}
		else if(ch1[i]>='A'&&ch1[i]<='Z')
		{
			if(n>=0) ch1[i] = ((ch1[i]-'A') + n)%26+'A';
			else if(n<0) ch1[i] = ((ch1[i]-'A') + n+26)%26+'A';
		}
	}
	ch1[i] = '\0';
	printf("%s",ch1); 
	return 0;
}