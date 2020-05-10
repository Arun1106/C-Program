#include<stdio.h>
int main()
{
	int i,j,k,m,c=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	k=i;
	   //printf("%d:\n",k);
		while(k>0)
		{
			k=k/10;
			//printf("%d--\n",k);
			c++;
		}
		
}printf("%d",c);
}