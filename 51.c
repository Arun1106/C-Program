#include<stdio.h>
int main()
{
	int i,j=0,k;
	int a[100],n,m,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(j<n)
	{
	for(i=j;i<n;i++)
	{
		if(a[i]==0)
		{
			a[i]=1;
			printf("%d ",a[i]);
		}
		else if(a[i]==1)
		{
			a[i]=0;
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	j++;
	}
   printf("%d",j);
}