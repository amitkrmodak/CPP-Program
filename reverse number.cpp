#include<stdio.h>
int main()
{
	int n,i,r=0,m;
	printf("Enter the number=");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		i=n%10;
		r=r*10+i;
		n=n/10;
	}
	printf("\nThe reverse number of %d is=%d",m,r);
	return 0;
}
