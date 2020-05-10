#include<stdio.h>
int main()
{
	int i,j,k,c=1;
	int a[100];
	a[0]=3;
	a[1]=4;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{ 
	  a[++c]=(a[i]*10)+3;
	a[++c]=(a[i]*10)+4;	
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",a[i]);
	}
}