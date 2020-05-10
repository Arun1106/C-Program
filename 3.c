#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,c[100];
	char s[1000]={0};
	gets(s);
	scanf("%d",&k);
	for(i=0;i<strlen(s);i++)
	{
		c[i]=s[i]+k;
	printf("%d",c[i]-'0');
	}
}