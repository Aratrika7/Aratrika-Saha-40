#include<stdio.h>
int main()
{
	int n,rev=0,num;
	printf("enter a number");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	if(num==rev)
	printf("it is a palindrome number");
	else 
	printf("it is not a palindrome number");
	return 0;
}
