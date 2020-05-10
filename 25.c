#include<stdio.h>
int isprime(int);
int main()
{
	int i,j,n,f=0,f1=0,m,h=0;
	int c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i+j==n)
			{   	
				c=isprime(i);
				d=isprime(j);
				if(c==1&&d==1)
				{
					h=1;
					
					break;
				}
			}
		}
	}
	if(h==1)
	{
		printf("POSSIBLE\n");
	}
	else
	{
		printf("NOT POSSIBLE\n");
	}
}
isprime(int a)
{  int m,f=0;
	for(m=2;m<=a/2;m++)
	{
					if(a%m==0)
					{	f=1;
						break;
					}		
		}
		if(f==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}
