#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],p[20];
	int i,j;
	printf("enter string:");
	gets(s);
	for(i=0,j=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		{
			p[j++]=s[i];
		}
	}
	p[j]='\0';
	printf("the string is:");
	puts(p);
}
