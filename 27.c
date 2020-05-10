#include<stdio.h>
int main()
{
	int i,j,k,g,p,m;
	int n,a[100],f,b[100],c[100],h;
	printf("size1:\n");
	scanf("%d",&n);
	h=n-1;
	printf("size2:\n");
	scanf("%d",&k);
	g=k-1;
	printf("first array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Second array :\n");
	for(j=0;j<k;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=n-1;i>=0;i--)
	{  if(g>=0)
	   {
   		p=a[i]+b[g];
		printf("%d-->%d=%d\n",i,g,p);
		g=g-1;
   		}
   		else
   		{
		   	p=a[i];
		   }
		
		if(p<10)
		{
			c[h--]=p;
		}
		else
		{	m=p%10;
				p=p/10;	
				c[h--]=m;
				a[i-1]=a[i-1]+p;
    
		}
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",c[i]); 
	}
}