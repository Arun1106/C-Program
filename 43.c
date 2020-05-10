#include<stdio.h>
int main()
{
	
	int i,j,n,m;
	scanf("%d",&n);
	i=n;
	scanf("%d",&m);
	while(i<m)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
		i++;
	}
}