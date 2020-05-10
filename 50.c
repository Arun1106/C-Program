#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j,k=0;
	char s[100],b[100];
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			b[k]=s[i];
				//printf("%c",b[k]);
			k++;
				
		}
		i++;
	}
	i=0;
	while(i<strlen(s))
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			s[i]=b[--k];
		
			i++;
				
		}
		i++;
	}
	for(i=0;i<strlen(s);i++)
	{
		printf("%c",s[i]);
	}
}