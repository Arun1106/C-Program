#include<stdio.h>
int maxi(int a,int b,int c)
{ 
  if(a>b&&a>c)
  {
  	return a;
  }
  else if(b>c&&b>a)
  {
  	return b;
  }
  else
  {
  	return c;
  }
	
}
int main()
{
	int i,j,k,e;
	scanf("%d%d%d",&i,&j,&k);
	e=maxi(i,j,k);
	printf("%d",e);
}