#include<stdio.h>
#include<math.h>
int main()
{
	int n,s=0,r,m;
	printf("Enter a number=");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		s=s+pow(r,3);
		n=n/10;
	}
	printf("\nThe sum of cube of %d is=%d",m,s);
	if(m==s)
		printf("\nThe two numbers are same");
	else
		printf("\nThe two numbers are not same");
	return 0;
}
