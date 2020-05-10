#include<stdio.h>
#include<string.h>
int main()
{  int i,j,k=0,c=0,m,d,e,r;
	char a[100];
	char b[100];
	char d1[100];
	gets(a);
	j=strlen(a)-1;
	d=j;
 for(i=j;i>=0;i--)
 {
    if(a[i]==' ')
    { 
     	c=i;
    	e=c;
      while(c<=d)
      {
      		b[k++]=a[c++];
      }
      d=i-1;	
    }
    else if(i==0)
    {	r=i;
    	b[k++]=' ';
    	while(r<=e)
    	{
	    	b[k++]=a[r];
			r++;	
	    }
	    e=i-1;
    }
 }
 b[k]='\0';	
 puts(b);
}