#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char s[30];
	printf("enter string:");
	gets(s);
	n=strlen(s);
	while(n>0)
    {
        n--;
        printf("%c",s[n]);
    }
	return 0;
}
