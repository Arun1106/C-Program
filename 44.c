#include<stdio.h>
int main()
{
	int i,j,n,m=0,k=0;
	int a[100],b[100]={0},c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(i=0;i<100;i++)
	{   k=0;
		if(b[i]!=0)
		{
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					k++;
				//printf("FOR %d:\n",i);
				//printf("%d\n",j);
				}
			}
			b[i]=k;
		//	printf(" mis%d\n",m);
			c[m]=k;
		//	printf(" m valueis%d\n",c[m]);
			m++;
			
			
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(c[i]<c[j])
			{
				int temp;
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
      for(j=0;j<100;j++)
      {
       if(b[j]!=0)
       {
       	 if(c[i]==b[j])
       	 {
 	       	printf("%d\n",j);
 	       	b[j]=0;
 	       }
       }
      }
	}
}