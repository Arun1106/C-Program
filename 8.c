#include<stdio.h>
int main()
{
	int i,j=1,n,count=1,k;
	scanf("%d",&n);
	k=count;
	for(i=1;k<=n;i++)
	{	if(count%2==0)
	    {	j=1;
    		while(j<=count)
    		{	
		    	printf("-%d ",k);
		    	j=j+1;
		    	k=k+1;
		    }
		    count=count+1;
    	}
    	else
    	{	j=1;
	    	while(j<=count)
    		{	
		    	printf("%d ",k);
		    	j=j+1;
		    	k=k+1;
		    }
		    count=count+1;
	    }
	}
}