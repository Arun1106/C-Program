#include<stdio.h>
int main()
{
	long	int odd=0,even=0,k,c;
	scanf("%ld",&k);
	while(k>0)
	{	
	    c=k%10;
	    if(c%2!=0)
	    {
    		odd++;
    	}
    	else
    	{
	    	even++;
	    }
		k=k/10;
		
	}
	printf("odd: %ld even : %ld",odd,even);
}