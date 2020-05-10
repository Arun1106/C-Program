#include<stdio.h>
int main()
{
	int i,j,kl;
	int a[100],b[100],c[100]={0};
 	int m,n;
 	scanf("%d%d",&m,&n);
 	for(i=0;i<m;i++)
 	{
	 	scanf("%d",&a[i]);
	 	c[a[i]]++;
 	}
	 for(i=0;i<n;i++)
 	{
	 	scanf("%d",&b[i]);
	 	if(c[b[i]]==0)
	 		{
			 c[b[i]]++;
 		}
 		else 
 		{   c[b[i]]++;
		 	c[b[i]]--;
		 }
	 }
	 for(i=0;i<100;i++)
	 {
 		if(c[i]!=0)
 		{
		 	printf("%d",i);
		 }
 	}
}