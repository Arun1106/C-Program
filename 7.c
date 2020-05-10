#include<stdio.h>
int main()
{
	
	int i,j,n,m,c=0,s1=0,s2=0;
	int diff;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s1=s1+a[i];
	}
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		s2=s2+b[i];
	}
	
	j=sizeof(a)/sizeof(a[0]);

/*	for(i=0;i<j;i++)
	{
		if(a[i]!=b[i]&&c==0)
		{  // c=1;
			printf("%d-->%d\n",i,a[i]);
		}
		
	}*/
	diff=s1-s2;
	for(i=0;i<j;i++)
	{
		if(a[i]==diff)
		{
			printf("%d-->%d",i,a[i]);
		}
	}
	
}