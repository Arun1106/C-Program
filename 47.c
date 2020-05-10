#include<stdio.h>
int main()
{
int num;
char a;
while(scanf("%c %d",&a,&num)==2)
{
while(num--)
{
printf("%c",a);
}
}
return 0;
}