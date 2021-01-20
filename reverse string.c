#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int n;
	printf("enter string:");
	gets(s);
	n=strlen(s);
	while(n>0)
	{
		n--;
		printf("the string is %c",s[n]);
	}
	return 0;
}
