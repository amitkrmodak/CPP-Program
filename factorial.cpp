#include<stdio.h>
int main()
{
	int n,r=1,m;
	printf("Enter a number=");
	scanf("%d",&n);
	m=n;
	while(n!=1)
	{
		r=r*n;
		n--;
	}
	printf("The factorial of %d is=%d",m,r);
	return 0;
}
