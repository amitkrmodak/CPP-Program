#include<stdio.h>
int main()
{
	int n,a,r=0;
	printf("Enter a number=");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		r=r+a;
	}
	printf("\nResult=%d",r);
	return 0;
}
