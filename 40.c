#include<stdio.h>
int main()
{
	int i,j,k,a[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(i%2!=0)
			{
				if(a[i]>a[j])
				{
					a[i]=a[i]+a[j]-(a[j]=a[i]);
				}
			}
			else
			{
				if(a[i]<a[j])
				{
					a[i]=a[i]+a[j]-(a[j]=a[i]);
				}
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",a[i]);
	}
}