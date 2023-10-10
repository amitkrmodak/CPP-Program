#include<stdio.h>
int sum(int ,int);
int main()
{
	int n,r=0,m;
	printf("Enter a number=");
	scanf("%d",&n);
	m=sum(n,r);
	printf("The sum of first %d number is %d",n,m);
	return 0;
}
int sum(int a,int r)
{
	if(a==0)
		return r;
	else
		return sum(a-1,r+a);
}
