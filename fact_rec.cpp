#include<stdio.h>
int fact(int);
int main()
{
	int n,r;
	printf("Enter a number=");
	scanf("%d",&n);
	r=fact(n);
	printf("\nThe factorial of %d=%d",n,r);
	return 0;
}
int fact(int x)
{
	if(x==1)
		return 1;
	else
		return (x*fact(x-1));
}
