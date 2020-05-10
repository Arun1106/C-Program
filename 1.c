#include<stdio.h>
int main()
{  int n,i,j,f=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=2;j<i;j++)
		{	f=0;
			if(i%j==0)
			{	f=1;
				break;
			}
		}
		if(f==0)
		{
			printf("%d\n",i);
		}
	}
}