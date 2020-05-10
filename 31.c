#include<stdio.h>
int main()
{
	int i,j,k,n;
	int a[100],b[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(i=0;i<100;i++)
	{
		if(b[i]!=0)
		{
			printf("%d->%d\n",b[i],i);
		}
	}
}