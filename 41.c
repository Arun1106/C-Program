#include<stdio.h>
#include<string.h>
int main()
{
	long b1,b2;
	int i=0,j,k=0,a[100];
	scanf("%ld",&b1);
	scanf("%ld",&b2);
	while(b1!=0||b2!=0)
	{
		a[i++]=(b1%10+b2%10+k)%2;
		k=(b1%10+b2%10+k)/2;
		b1=b1/10;
		b2=b2/10;
	}
	if(k!=0)
	{
		a[i++]=k;
	}
	--i;
	while(i>=0)
	{
		printf("%d",a[i--]);
	}
}