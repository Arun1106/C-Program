#include<stdio.h>
int main()
{
	int i,j,k;
	int n,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			k=a[i];
			a[i]=a[i+1];
			a[i+1]=k;
			
		}
	}
	printf("%d",a[n-2]);
}