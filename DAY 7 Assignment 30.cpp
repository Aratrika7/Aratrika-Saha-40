#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
	
	n=n/10;
	count++;
}
	printf("Number of digit is %d",count);
	return 0;
}
