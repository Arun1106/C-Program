#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k;
	char s1[100];
	gets(s1);
	for(i=0;i<strlen(s1);i++)
	{
		for(j=0;j<strlen(s1);j++)
		{
			if(i==j)
			{
				printf("%c",s1[i]);
			}
			else if(j==strlen(s1)-1-i)
			{
				printf("%c",s1[j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}