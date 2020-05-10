#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j,k,a[100],b[100],c=0;
	char s1[100],s2[100];
	gets(s1);
	gets(s2);

	if(check(s1,s2))
	{
		printf("Not anagram");
	}
	else{
		printf("anagram");
	}
	
	
}
int check(char s1[],char s2[])
{int i=0,c,a[100],b[100];
		while(s1[i]!='\0')
	{
		i++;
		a[s1[i]-'a']++;
	}
	i=0;
	while(s2[i]!='\0')
	{
		i++;
		b[s2[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=b[i])
		{
			return 0;
		}
	}
	return 1;
}