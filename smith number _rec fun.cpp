#include<stdio.h>
int prime_fact(int,int);
int sum(int,int);
int i=2;
int main()
{
	int n,s,t;
	printf("Enter a number=");
	scanf("%d",&n);
	printf("\nThe prime factorials of %d are---\n",n);
	s=prime_fact(n,0);
	t=sum(n,0);
	if(s==t)
		printf("%d is a smith number",n);
	else
		printf("%d is not a smith number",n);
	return 0;
}
int prime_fact(int a,int r)
{
	if(a==1)
	{
		return r;
	}
	else
	{
		if(a%i==0)
		{
			printf("%5d",i);
			return prime_fact(a/i,r+i);
		}
		else
			i++;
	}
}
int sum(int a,int r)
{
	if(a%10==0)
		return (r);
	else
		return sum(a/10,r+a%10);
}
