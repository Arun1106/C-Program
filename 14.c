#include<stdio.h>
int main()
{
	int i,j=0,m=0,n,k,count=1;
	int a[100],b[100];
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{  
		if(a[i]==0)
		{
			b[j]=0;
			m++;
			j++;
			count=1;
		}
		else if(a[i]==1&&count<k)
		{	
			b[j]=1;
			j++;
			count++;
			m++;
		}
		else
		{	b[j]=1;
			j++;
			b[j]=0;
			j++;
			m=m+2;
			count=1;
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d",b[i]);
	}
}