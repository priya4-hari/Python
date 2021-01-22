#include<stdio.h>
int main()
{
	char s[30];
	printf("enter string:");
	scanf("%[^~]",s);
	printf("the string is:%s",s);
	return 0;
}
