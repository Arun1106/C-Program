#include<stdio.h>
int main()
{
	int i,j,k,a,b;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=1;j*j<=i;j++)
		{
			if(j*j==i)
			{
				printf("%d ",i);
			}
		}
	}
}