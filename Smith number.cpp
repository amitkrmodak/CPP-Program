#include<stdio.h>
int pfact(int);
int sum (int);
int main()
{
	int n,r1,r2;
	printf("Enter a number=");
	scanf("%d",&n);
	r1=pfact(n);
	r2=sum(n);
	if(r1==r2)
		printf("\nSmith Number");
	else
		printf("\nNot Smith Number");
	return 0;
}
int pfact(int n)
{
	int i=2,s=0;
	while(n>1)
	{
		if(n%i==0)
		{
			s=s+i;
			n=n/i;
		}
		else
		{
			i++;
		}
	}
	printf("\nThe sum prime factorial is=%d",s);
	return (s);
}
int sum(int n)
{
	int r=0,a;
	while(n>0)
	{
		a=n%10;
		n=n/10;
		r=r+a;
	}
	printf("\nThe sum of digit is=%d",r);
	return(r);
}

