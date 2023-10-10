#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter 2 number to swap=");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nAfter swapping the 2 number is=%d %d",a,b);
	return 0;
}
