#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=20;i+=2)
	{
		sum=sum+i;
	}
	printf("The sum of the first 10 odd natural numbers are %d",sum);
	return 0;
}
