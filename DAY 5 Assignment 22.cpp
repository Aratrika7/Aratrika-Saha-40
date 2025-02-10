#include<stdio.h>
int main()
{
	char a;
	printf("enter the uppercase character H for heads or T for tails:");
	scanf("%c",&a);
	if(a=='H')
	printf("Heads");
	else if (a=='T')
	printf("Tails");
	return 0;
}
