#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k;
	char s1[100],s2[100];
	gets(s1);
	i=0,j=strlen(s1)-1;
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	
	}
i=0,j=strlen(s1)-1;
	while(i<j)
	{	if(s2[i]>='a'&&s2[i]<='z'&&s2[j]<='a'&&s2[j]<='z')
		{
		int temp;
		temp=s2[i];
		s2[i]=s2[j];
		s2[j]=temp;
		i++;
		j--;
		}
		else
		{
			i++;
			j--;
		}
	}
	for(i=0;i<strlen(s2);i++)
	{
			printf("%c",s2[i]);
	}
}