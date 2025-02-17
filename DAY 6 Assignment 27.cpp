#include<stdio.h>
int main()
{
int i,n,s=0;
for( i=1;i<=10;i++)
{
	n=i*i;
	s=n+s;
}
printf("Sum of squares of first 10 natural numbers= %d",s);
return 0;
}
