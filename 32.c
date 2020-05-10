#include<stdio.h>
int main()
{
	int i,j,k;
	int a[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			int temp;
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	 printf("{");
	for(i=0;i<n;i++)
	{  if(i!=n-1)
	   {
   			printf("%d->%d,",a[i],a[i+1]);
   	}
   	else
   	{
	   	printf("%d-->}",a[i]);
	   }
	
	}
}