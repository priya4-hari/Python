#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,r;
	char a[40];
	scanf("%d",&n);
	i=0;
	while(n>0)
	{
		r=n%16;
		if(r<10)
			a[i]=r+48;
			else
				a[i]=r%10+65;
		i++;
		n=n/16;
	}
	a[i]='\0';
	for(i=strlen(a)-1;i>=0;--i)
	{
		printf("%c",a[i]);
	}
	return 0;
}
