#include<stdio.h>
int main()
{
	int i,j,k;
	int n;
	int a[100];
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{   printf("Enter a digit\n");
		scanf("%d",&k);
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
			{
				a[i]=-1;
			}
		}
		printf("remaining elements are\n");
		for(k=0;k<n;k++)
		{  if(a[k]!=-1)
		{
			printf("%d\n",a[k]);
		}
		}
	}
}